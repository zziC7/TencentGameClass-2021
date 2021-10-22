// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieScenePropertyBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyBinding() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
class UScriptStruct* FMovieScenePropertyBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertyBinding, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertyBinding"), sizeof(FMovieScenePropertyBinding), Get_Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertyBinding>()
{
	return FMovieScenePropertyBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePropertyBinding(FMovieScenePropertyBinding::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePropertyBinding"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertyBinding
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertyBinding()
	{
		UScriptStruct::DeferCppStructOps<FMovieScenePropertyBinding>(FName(TEXT("MovieScenePropertyBinding")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertyBinding;
	struct Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanUseClassLookup_MetaData[];
#endif
		static void NewProp_bCanUseClassLookup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanUseClassLookup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Source property binding information for an entity on a moviescene timeline\n * Comprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Source property binding information for an entity on a moviescene timeline\nComprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertyBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Leaf name of the property to animate */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Leaf name of the property to animate" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertyBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Comment", "/** Full path to the property from the object including struct and array indirection */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Full path to the property from the object including struct and array indirection" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertyBinding, PropertyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_MetaData[] = {
		{ "Comment", "/** True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit(void* Obj)
	{
		((FMovieScenePropertyBinding*)Obj)->bCanUseClassLookup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup = { "bCanUseClassLookup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieScenePropertyBinding), &Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieScenePropertyBinding",
		sizeof(FMovieScenePropertyBinding),
		alignof(FMovieScenePropertyBinding),
		Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePropertyBinding"), sizeof(FMovieScenePropertyBinding), Get_Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Hash() { return 3192102365U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

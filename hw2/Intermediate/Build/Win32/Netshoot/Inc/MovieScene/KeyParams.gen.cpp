// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/KeyParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyParams() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static UEnum* EMovieSceneKeyInterpolation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneKeyInterpolation"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneKeyInterpolation>()
	{
		return EMovieSceneKeyInterpolation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneKeyInterpolation(EMovieSceneKeyInterpolation_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneKeyInterpolation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Hash() { return 3205606171U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneKeyInterpolation"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneKeyInterpolation::Auto", (int64)EMovieSceneKeyInterpolation::Auto },
				{ "EMovieSceneKeyInterpolation::User", (int64)EMovieSceneKeyInterpolation::User },
				{ "EMovieSceneKeyInterpolation::Break", (int64)EMovieSceneKeyInterpolation::Break },
				{ "EMovieSceneKeyInterpolation::Linear", (int64)EMovieSceneKeyInterpolation::Linear },
				{ "EMovieSceneKeyInterpolation::Constant", (int64)EMovieSceneKeyInterpolation::Constant },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Comment", "/** Auto. */" },
				{ "Auto.DisplayName", "Auto" },
				{ "Auto.Name", "EMovieSceneKeyInterpolation::Auto" },
				{ "Auto.ToolTip", "Auto." },
				{ "Break.Comment", "/** Break. */" },
				{ "Break.DisplayName", "Break" },
				{ "Break.Name", "EMovieSceneKeyInterpolation::Break" },
				{ "Break.ToolTip", "Break." },
				{ "Constant.Comment", "/** Constant. */" },
				{ "Constant.DisplayName", "Constant" },
				{ "Constant.Name", "EMovieSceneKeyInterpolation::Constant" },
				{ "Constant.ToolTip", "Constant." },
				{ "Linear.Comment", "/** Linear. */" },
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.Name", "EMovieSceneKeyInterpolation::Linear" },
				{ "Linear.ToolTip", "Linear." },
				{ "ModuleRelativePath", "Public/KeyParams.h" },
				{ "User.Comment", "/** User. */" },
				{ "User.DisplayName", "User" },
				{ "User.Name", "EMovieSceneKeyInterpolation::User" },
				{ "User.ToolTip", "User." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneKeyInterpolation",
				"EMovieSceneKeyInterpolation",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

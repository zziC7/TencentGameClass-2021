// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/WindDirectionalSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSourceComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* EWindSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWindSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("EWindSourceType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWindSourceType>()
	{
		return EWindSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWindSourceType(EWindSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("EWindSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EWindSourceType_Hash() { return 2949845309U; }
	UEnum* Z_Construct_UEnum_Engine_EWindSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWindSourceType"), 0, Get_Z_Construct_UEnum_Engine_EWindSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWindSourceType::Directional", (int64)EWindSourceType::Directional },
				{ "EWindSourceType::Point", (int64)EWindSourceType::Point },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Directional.Name", "EWindSourceType::Directional" },
				{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
				{ "Point.Name", "EWindSourceType::Point" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EWindSourceType",
				"EWindSourceType",
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
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetWindType)
	{
		P_GET_ENUM(EWindSourceType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWindType(EWindSourceType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_InNewRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetMaximumGustAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewMaxGust);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumGustAmount(Z_Param_InNewMaxGust);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetMinimumGustAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewMinGust);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumGustAmount(Z_Param_InNewMinGust);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param_InNewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStrength(Z_Param_InNewStrength);
		P_NATIVE_END;
	}
	void UWindDirectionalSourceComponent::StaticRegisterNativesUWindDirectionalSourceComponent()
	{
		UClass* Class = UWindDirectionalSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaximumGustAmount", &UWindDirectionalSourceComponent::execSetMaximumGustAmount },
			{ "SetMinimumGustAmount", &UWindDirectionalSourceComponent::execSetMinimumGustAmount },
			{ "SetRadius", &UWindDirectionalSourceComponent::execSetRadius },
			{ "SetSpeed", &UWindDirectionalSourceComponent::execSetSpeed },
			{ "SetStrength", &UWindDirectionalSourceComponent::execSetStrength },
			{ "SetWindType", &UWindDirectionalSourceComponent::execSetWindType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics
	{
		struct WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms
		{
			float InNewMaxGust;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewMaxGust;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::NewProp_InNewMaxGust = { "InNewMaxGust", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms, InNewMaxGust), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::NewProp_InNewMaxGust,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set maximum deviation for wind gusts */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set maximum deviation for wind gusts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetMaximumGustAmount", nullptr, nullptr, sizeof(WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics
	{
		struct WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms
		{
			float InNewMinGust;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewMinGust;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::NewProp_InNewMinGust = { "InNewMinGust", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms, InNewMinGust), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::NewProp_InNewMinGust,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set minimum deviation for wind gusts */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set minimum deviation for wind gusts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetMinimumGustAmount", nullptr, nullptr, sizeof(WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics
	{
		struct WindDirectionalSourceComponent_eventSetRadius_Parms
		{
			float InNewRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::NewProp_InNewRadius = { "InNewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetRadius_Parms, InNewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::NewProp_InNewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set the effect radius for point wind */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set the effect radius for point wind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetRadius", nullptr, nullptr, sizeof(WindDirectionalSourceComponent_eventSetRadius_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics
	{
		struct WindDirectionalSourceComponent_eventSetSpeed_Parms
		{
			float InNewSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::NewProp_InNewSpeed = { "InNewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetSpeed_Parms, InNewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::NewProp_InNewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Sets the windspeed of the generated wind */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Sets the windspeed of the generated wind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetSpeed", nullptr, nullptr, sizeof(WindDirectionalSourceComponent_eventSetSpeed_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics
	{
		struct WindDirectionalSourceComponent_eventSetStrength_Parms
		{
			float InNewStrength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::NewProp_InNewStrength = { "InNewStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetStrength_Parms, InNewStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::NewProp_InNewStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Sets the strength of the generated wind */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Sets the strength of the generated wind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetStrength", nullptr, nullptr, sizeof(WindDirectionalSourceComponent_eventSetStrength_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics
	{
		struct WindDirectionalSourceComponent_eventSetWindType_Parms
		{
			EWindSourceType InNewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetWindType_Parms, InNewType), Z_Construct_UEnum_Engine_EWindSourceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set the type of wind generator to use */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set the type of wind generator to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetWindType", nullptr, nullptr, sizeof(WindDirectionalSourceComponent_eventSetWindType_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister()
	{
		return UWindDirectionalSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWindDirectionalSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGustAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGustAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGustAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGustAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPointWind_MetaData[];
#endif
		static void NewProp_bPointWind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPointWind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount, "SetMaximumGustAmount" }, // 4005296764
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount, "SetMinimumGustAmount" }, // 2179624773
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius, "SetRadius" }, // 353051511
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed, "SetSpeed" }, // 1338586657
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength, "SetStrength" }, // 1110036161
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType, "SetWindType" }, // 2293716172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Component that provides a directional wind source. Only affects SpeedTree assets. */" },
		{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/WindDirectionalSourceComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Component that provides a directional wind source. Only affects SpeedTree assets." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindDirectionalSourceComponent, Strength), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindDirectionalSourceComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount = { "MinGustAmount", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindDirectionalSourceComponent, MinGustAmount), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount = { "MaxGustAmount", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindDirectionalSourceComponent, MaxGustAmount), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ClampMin", "0.1" },
		{ "editcondition", "bSimulatePhysics" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindDirectionalSourceComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_SetBit(void* Obj)
	{
		((UWindDirectionalSourceComponent*)Obj)->bPointWind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind = { "bPointWind", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWindDirectionalSourceComponent), &Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindDirectionalSourceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::ClassParams = {
		&UWindDirectionalSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindDirectionalSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindDirectionalSourceComponent, 1658778219);
	template<> ENGINE_API UClass* StaticClass<UWindDirectionalSourceComponent>()
	{
		return UWindDirectionalSourceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindDirectionalSourceComponent(Z_Construct_UClass_UWindDirectionalSourceComponent, &UWindDirectionalSourceComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UWindDirectionalSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindDirectionalSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

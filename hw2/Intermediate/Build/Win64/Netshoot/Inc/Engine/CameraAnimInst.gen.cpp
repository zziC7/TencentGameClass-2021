// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraAnimInst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
// End Cross Module References
	DEFINE_FUNCTION(UCameraAnimInst::execSetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimInst::execSetDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDuration(Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimInst::execStop)
	{
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_bImmediate);
		P_NATIVE_END;
	}
	void UCameraAnimInst::StaticRegisterNativesUCameraAnimInst()
	{
		UClass* Class = UCameraAnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDuration", &UCameraAnimInst::execSetDuration },
			{ "SetScale", &UCameraAnimInst::execSetScale },
			{ "Stop", &UCameraAnimInst::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics
	{
		struct CameraAnimInst_eventSetDuration_Parms
		{
			float NewDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimInst_eventSetDuration_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Changes the running duration of this active anim, while maintaining playback position. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Changes the running duration of this active anim, while maintaining playback position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, nullptr, "SetDuration", nullptr, nullptr, sizeof(CameraAnimInst_eventSetDuration_Parms), Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimInst_SetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics
	{
		struct CameraAnimInst_eventSetScale_Parms
		{
			float NewDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimInst_eventSetScale_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Changes the scale of the animation while playing.*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Changes the scale of the animation while playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, nullptr, "SetScale", nullptr, nullptr, sizeof(CameraAnimInst_eventSetScale_Parms), Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimInst_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimInst_Stop_Statics
	{
		struct CameraAnimInst_eventStop_Parms
		{
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraAnimInst_eventStop_Parms*)Obj)->bImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAnimInst_eventStop_Parms), &Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Stops this instance playing whatever animation it is playing. */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Stops this instance playing whatever animation it is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, nullptr, "Stop", nullptr, nullptr, sizeof(CameraAnimInst_eventStop_Parms), Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimInst_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister()
	{
		return UCameraAnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpGroupInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpGroupInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveInst;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraAnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraAnimInst_SetDuration, "SetDuration" }, // 1637901123
		{ &Z_Construct_UFunction_UCameraAnimInst_SetScale, "SetScale" }, // 2082482422
		{ &Z_Construct_UFunction_UCameraAnimInst_Stop, "Stop" }, // 232841300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/CameraAnimInst.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim_MetaData[] = {
		{ "Comment", "/** which CameraAnim this is an instance of */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "which CameraAnim this is an instance of" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim = { "CamAnim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, CamAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst_MetaData[] = {
		{ "Comment", "/** the UInterpGroupInst used to do the interpolation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "the UInterpGroupInst used to do the interpolation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst = { "InterpGroupInst", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, InterpGroupInst), Z_Construct_UClass_UInterpGroupInst_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Multiplier for playback rate.  1.0 = normal. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Multiplier for playback rate.  1.0 = normal." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack_MetaData[] = {
		{ "Comment", "/** cached movement track from the currently playing anim so we don't have to go find it every frame */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "cached movement track from the currently playing anim so we don't have to go find it every frame" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack = { "MoveTrack", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, MoveTrack), Z_Construct_UClass_UInterpTrackMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst = { "MoveInst", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, MoveInst), Z_Construct_UClass_UInterpTrackInstMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimInst_Statics::ClassParams = {
		&UCameraAnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraAnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAnimInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnimInst, 2122743467);
	template<> ENGINE_API UClass* StaticClass<UCameraAnimInst>()
	{
		return UCameraAnimInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnimInst(Z_Construct_UClass_UCameraAnimInst, &UCameraAnimInst::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraAnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

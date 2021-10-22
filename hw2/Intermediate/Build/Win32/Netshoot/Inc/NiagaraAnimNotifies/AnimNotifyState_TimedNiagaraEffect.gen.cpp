// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraAnimNotifies/Public/AnimNotifyState_TimedNiagaraEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedNiagaraEffect() {}
// Cross Module References
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_NiagaraAnimNotifies();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyState_TimedNiagaraEffect::execGetSpawnedEffect)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemComponent**)Z_Param__Result=P_THIS->GetSpawnedEffect(Z_Param_MeshComp);
		P_NATIVE_END;
	}
	void UAnimNotifyState_TimedNiagaraEffect::StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect()
	{
		UClass* Class = UAnimNotifyState_TimedNiagaraEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnedEffect", &UAnimNotifyState_TimedNiagaraEffect::execGetSpawnedEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics
	{
		struct AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms
		{
			UMeshComponent* MeshComp;
			UFXSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms, MeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Return FXSystemComponent created from SpawnEffect\n" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Return FXSystemComponent created from SpawnEffect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect, nullptr, "GetSpawnedEffect", nullptr, nullptr, sizeof(AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister()
	{
		return UAnimNotifyState_TimedNiagaraEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[];
#endif
		static void NewProp_bDestroyAtEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect, "GetSpawnedEffect" }, // 2049222896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Timed Niagara Effect Notify\n// Allows a looping Niagara effect to be played in an animation that will activate\n// at the beginning of the notify and deactivate at the end.\n" },
		{ "DisplayName", "Timed Niagara Effect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_TimedNiagaraEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Timed Niagara Effect Notify\nAllows a looping Niagara effect to be played in an animation that will activate\nat the beginning of the notify and deactivate at the end." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The niagara system to spawn for the notify state" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, Template), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The socket or bone to attach the system to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Offset from the socket or bone to place the Niagara system" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Rotation offset from the socket or bone for the Niagara system" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "DisplayName", "Destroy Immediately" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Whether the Niagara system should be immediately destroyed at the end of the notify state or be allowed to finish" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedNiagaraEffect*)Obj)->bDestroyAtEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd = { "bDestroyAtEnd", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotifyState_TimedNiagaraEffect), &Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedNiagaraEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams = {
		&UAnimNotifyState_TimedNiagaraEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_TimedNiagaraEffect, 2996563792);
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotifyState_TimedNiagaraEffect>()
	{
		return UAnimNotifyState_TimedNiagaraEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_TimedNiagaraEffect(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect, &UAnimNotifyState_TimedNiagaraEffect::StaticClass, TEXT("/Script/NiagaraAnimNotifies"), TEXT("UAnimNotifyState_TimedNiagaraEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedNiagaraEffect);
	DEFINE_FUNCTION(UAnimNotifyState_TimedNiagaraEffectAdvanced::execGetNotifyProgress)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNotifyProgress(Z_Param_MeshComp);
		P_NATIVE_END;
	}
	void UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced()
	{
		UClass* Class = UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotifyProgress", &UAnimNotifyState_TimedNiagaraEffectAdvanced::execGetNotifyProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics
	{
		struct AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms
		{
			UMeshComponent* MeshComp;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms, MeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Returns a 0 to 1 value for the progress of this component along the notify.\n" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Returns a 0 to 1 value for the progress of this component along the notify." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced, nullptr, "GetNotifyProgress", nullptr, nullptr, sizeof(AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_NoRegister()
	{
		return UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress, "GetNotifyProgress" }, // 818246665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nSame as Timed Niagara Effect but also provides some more advanced abilities at an additional cost. \n*/" },
		{ "DisplayName", "Advanced Timed Niagara Effect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_TimedNiagaraEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Same as Timed Niagara Effect but also provides some more advanced abilities at an additional cost." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedNiagaraEffectAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::ClassParams = {
		&UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_TimedNiagaraEffectAdvanced, 2825926599);
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotifyState_TimedNiagaraEffectAdvanced>()
	{
		return UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced, &UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass, TEXT("/Script/NiagaraAnimNotifies"), TEXT("UAnimNotifyState_TimedNiagaraEffectAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedNiagaraEffectAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

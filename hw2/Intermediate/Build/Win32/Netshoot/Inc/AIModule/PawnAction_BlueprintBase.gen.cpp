// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
// End Cross Module References
	static FName NAME_UPawnAction_BlueprintBase_ActionFinished = FName(TEXT("ActionFinished"));
	void UPawnAction_BlueprintBase::ActionFinished(APawn* ControlledPawn, EPawnActionResult::Type WithResult)
	{
		PawnAction_BlueprintBase_eventActionFinished_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		Parms.WithResult=WithResult;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionFinished),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionPause = FName(TEXT("ActionPause"));
	void UPawnAction_BlueprintBase::ActionPause(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionPause_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionPause),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionResume = FName(TEXT("ActionResume"));
	void UPawnAction_BlueprintBase::ActionResume(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionResume_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionResume),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionStart = FName(TEXT("ActionStart"));
	void UPawnAction_BlueprintBase::ActionStart(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionStart_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionStart),&Parms);
	}
	static FName NAME_UPawnAction_BlueprintBase_ActionTick = FName(TEXT("ActionTick"));
	void UPawnAction_BlueprintBase::ActionTick(APawn* ControlledPawn, float DeltaSeconds)
	{
		PawnAction_BlueprintBase_eventActionTick_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UPawnAction_BlueprintBase_ActionTick),&Parms);
	}
	void UPawnAction_BlueprintBase::StaticRegisterNativesUPawnAction_BlueprintBase()
	{
	}
	struct Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::NewProp_WithResult = { "WithResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::NewProp_WithResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, nullptr, "ActionFinished", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionFinished_Parms), Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionPause_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, nullptr, "ActionPause", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionPause_Parms), Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionResume_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, nullptr, "ActionResume", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionResume_Parms), Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionStart_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "Comment", "//----------------------------------------------------------------------//\n// Blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
		{ "ToolTip", "Blueprint interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, nullptr, "ActionStart", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionStart_Parms), Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction_BlueprintBase, nullptr, "ActionTick", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionTick_Parms), Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnAction_BlueprintBase_NoRegister()
	{
		return UPawnAction_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionFinished, "ActionFinished" }, // 154589911
		{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionPause, "ActionPause" }, // 688413278
		{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionResume, "ActionResume" }, // 435954215
		{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionStart, "ActionStart" }, // 1211859330
		{ &Z_Construct_UFunction_UPawnAction_BlueprintBase_ActionTick, "ActionTick" }, // 3743793192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actions/PawnAction_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::ClassParams = {
		&UPawnAction_BlueprintBase::StaticClass,
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
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnAction_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnAction_BlueprintBase, 3941328323);
	template<> AIMODULE_API UClass* StaticClass<UPawnAction_BlueprintBase>()
	{
		return UPawnAction_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_BlueprintBase(Z_Construct_UClass_UPawnAction_BlueprintBase, &UPawnAction_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

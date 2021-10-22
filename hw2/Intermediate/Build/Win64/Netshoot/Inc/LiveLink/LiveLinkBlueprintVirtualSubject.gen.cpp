// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintVirtualSubject() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
// End Cross Module References
	static FName NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize = FName(TEXT("OnInitialize"));
	void ULiveLinkBlueprintVirtualSubject::OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize),NULL);
	}
	static FName NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate = FName(TEXT("OnUpdate"));
	void ULiveLinkBlueprintVirtualSubject::OnUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate),NULL);
	}
	void ULiveLinkBlueprintVirtualSubject::StaticRegisterNativesULiveLinkBlueprintVirtualSubject()
	{
		UClass* Class = ULiveLinkBlueprintVirtualSubject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateVirtualSubjectFrameData_Internal", &ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectFrameData_Internal },
			{ "UpdateVirtualSubjectStaticData_Internal", &ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectStaticData_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "OnUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics
	{
		struct LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms
		{
			FLiveLinkBaseFrameData InStruct;
			bool bInShouldStampCurrentTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static void NewProp_bInShouldStampCurrentTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShouldStampCurrentTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms, InStruct), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime_SetBit(void* Obj)
	{
		((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms*)Obj)->bInShouldStampCurrentTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime = { "bInShouldStampCurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "UpdateVirtualSubjectFrameData_Internal", nullptr, nullptr, sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics
	{
		struct LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms
		{
			FLiveLinkBaseStaticData InStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms, InStruct), Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "UpdateVirtualSubjectStaticData_Internal", nullptr, nullptr, sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister()
	{
		return ULiveLinkBlueprintVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize, "OnInitialize" }, // 652621485
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate, "OnUpdate" }, // 2546180758
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal, "UpdateVirtualSubjectFrameData_Internal" }, // 1693527810
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal, "UpdateVirtualSubjectStaticData_Internal" }, // 4232001366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base class for creating virtual subjects in Blueprints\n" },
		{ "IncludePath", "VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
		{ "ToolTip", "Base class for creating virtual subjects in Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBlueprintVirtualSubject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams = {
		&ULiveLinkBlueprintVirtualSubject::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkBlueprintVirtualSubject, 1444326797);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkBlueprintVirtualSubject>()
	{
		return ULiveLinkBlueprintVirtualSubject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkBlueprintVirtualSubject(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, &ULiveLinkBlueprintVirtualSubject::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkBlueprintVirtualSubject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBlueprintVirtualSubject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

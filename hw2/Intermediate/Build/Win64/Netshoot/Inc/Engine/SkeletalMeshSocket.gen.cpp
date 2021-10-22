// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSocket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(USkeletalMeshSocket::execInitializeSocketFromLocation)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_STRUCT(FVector,Z_Param_WorldNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSocketFromLocation(Z_Param_SkelComp,Z_Param_WorldLocation,Z_Param_WorldNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshSocket::execGetSocketLocation)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSocketLocation(Z_Param_SkelComp);
		P_NATIVE_END;
	}
	void USkeletalMeshSocket::StaticRegisterNativesUSkeletalMeshSocket()
	{
		UClass* Class = USkeletalMeshSocket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSocketLocation", &USkeletalMeshSocket::execGetSocketLocation },
			{ "InitializeSocketFromLocation", &USkeletalMeshSocket::execInitializeSocketFromLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics
	{
		struct SkeletalMeshSocket_eventGetSocketLocation_Parms
		{
			const USkeletalMeshComponent* SkelComp;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, nullptr, "GetSocketLocation", nullptr, nullptr, sizeof(SkeletalMeshSocket_eventGetSocketLocation_Parms), Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics
	{
		struct SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms
		{
			const USkeletalMeshComponent* SkelComp;
			FVector WorldLocation;
			FVector WorldNormal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldNormal = { "WorldNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, nullptr, "InitializeSocketFromLocation", nullptr, nullptr, sizeof(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms), Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister()
	{
		return USkeletalMeshSocket::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceAlwaysAnimated_MetaData[];
#endif
		static void NewProp_bForceAlwaysAnimated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceAlwaysAnimated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshSocket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation, "GetSocketLocation" }, // 1321976380
		{ &Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation, "InitializeSocketFromLocation" }, // 1821196800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "Engine/SkeletalMeshSocket.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "Comment", "/** \n\x09 *\x09""Defines a named attachment location on the USkeletalMesh. \n\x09 *\x09These are set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent.\n\x09 *\x09The Outer of a SkeletalMeshSocket should always be the USkeletalMesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "Defines a named attachment location on the USkeletalMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent.\nThe Outer of a SkeletalMeshSocket should always be the USkeletalMesh." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSocket, SocketName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSocket, BoneName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "Comment", "/** If true then the hierarchy of bones this socket is attached to will always be \n\x09    evaluated, even if it had previously been removed due to the current lod setting */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "If true then the hierarchy of bones this socket is attached to will always be\n          evaluated, even if it had previously been removed due to the current lod setting" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit(void* Obj)
	{
		((USkeletalMeshSocket*)Obj)->bForceAlwaysAnimated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated = { "bForceAlwaysAnimated", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkeletalMeshSocket), &Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshSocket_Statics::ClassParams = {
		&USkeletalMeshSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshSocket, 1781304679);
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshSocket>()
	{
		return USkeletalMeshSocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshSocket(Z_Construct_UClass_USkeletalMeshSocket, &USkeletalMeshSocket::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMeshSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSocket);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshSocket)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

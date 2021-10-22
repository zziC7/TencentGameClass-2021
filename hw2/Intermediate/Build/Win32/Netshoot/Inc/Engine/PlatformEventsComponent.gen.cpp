// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/PlatformEventsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformEventsComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformEventsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformEventsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "PlatformEventDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlatformEventsComponent::execSupportsConvertibleLaptops)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsConvertibleLaptops();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformEventsComponent::execIsInTabletMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTabletMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformEventsComponent::execIsInLaptopMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInLaptopMode();
		P_NATIVE_END;
	}
	void UPlatformEventsComponent::StaticRegisterNativesUPlatformEventsComponent()
	{
		UClass* Class = UPlatformEventsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInLaptopMode", &UPlatformEventsComponent::execIsInLaptopMode },
			{ "IsInTabletMode", &UPlatformEventsComponent::execIsInTabletMode },
			{ "SupportsConvertibleLaptops", &UPlatformEventsComponent::execSupportsConvertibleLaptops },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics
	{
		struct PlatformEventsComponent_eventIsInLaptopMode_Parms
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
	void Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformEventsComponent_eventIsInLaptopMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformEventsComponent_eventIsInLaptopMode_Parms), &Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Check whether a convertible laptop is laptop mode.\n\x09 *\n\x09 * @return true if in laptop mode, false otherwise or if not a convertible laptop.\n\x09 * @see IsInTabletMode, SupportsConvertibleLaptops\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Check whether a convertible laptop is laptop mode.\n\n@return true if in laptop mode, false otherwise or if not a convertible laptop.\n@see IsInTabletMode, SupportsConvertibleLaptops" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "IsInLaptopMode", nullptr, nullptr, sizeof(PlatformEventsComponent_eventIsInLaptopMode_Parms), Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics
	{
		struct PlatformEventsComponent_eventIsInTabletMode_Parms
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
	void Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformEventsComponent_eventIsInTabletMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformEventsComponent_eventIsInTabletMode_Parms), &Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Check whether a convertible laptop is laptop mode.\n\x09 *\n\x09 * @return true if in tablet mode, false otherwise or if not a convertible laptop.\n\x09 * @see IsInLaptopMode, SupportsConvertibleLaptops\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Check whether a convertible laptop is laptop mode.\n\n@return true if in tablet mode, false otherwise or if not a convertible laptop.\n@see IsInLaptopMode, SupportsConvertibleLaptops" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "IsInTabletMode", nullptr, nullptr, sizeof(PlatformEventsComponent_eventIsInTabletMode_Parms), Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics
	{
		struct PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms
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
	void Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms), &Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Check whether the platform supports convertible laptops.\n\x09 *\n\x09 * Note: This does not necessarily mean that the platform is a convertible laptop.\n\x09 * For example, convertible laptops running Windows 7 or older will return false,\n\x09 * and regular laptops running Windows 8 or newer will return true.\n\x09 *\n\x09 * @return true for convertible laptop platforms, false otherwise.\n\x09 * @see IsInLaptopMode, IsInTabletMode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Check whether the platform supports convertible laptops.\n\nNote: This does not necessarily mean that the platform is a convertible laptop.\nFor example, convertible laptops running Windows 7 or older will return false,\nand regular laptops running Windows 8 or newer will return true.\n\n@return true for convertible laptop platforms, false otherwise.\n@see IsInLaptopMode, IsInTabletMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "SupportsConvertibleLaptops", nullptr, nullptr, sizeof(PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms), Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformEventsComponent_NoRegister()
	{
		return UPlatformEventsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformEventsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformChangedToLaptopModeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlatformChangedToLaptopModeDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformChangedToTabletModeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlatformChangedToTabletModeDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformEventsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformEventsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode, "IsInLaptopMode" }, // 1903403074
		{ &Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode, "IsInTabletMode" }, // 3714701844
		{ &Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, "PlatformEventDelegate__DelegateSignature" }, // 2284256336
		{ &Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops, "SupportsConvertibleLaptops" }, // 1479428412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformEventsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Component to handle receiving notifications from the OS about platform events.\n */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Components/PlatformEventsComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about platform events." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate_MetaData[] = {
		{ "Comment", "/** This is called when a convertible laptop changed into laptop mode. */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "This is called when a convertible laptop changed into laptop mode." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate = { "PlatformChangedToLaptopModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformEventsComponent, PlatformChangedToLaptopModeDelegate), Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate_MetaData[] = {
		{ "Comment", "/** This is called when a convertible laptop changed into tablet mode. */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "This is called when a convertible laptop changed into tablet mode." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate = { "PlatformChangedToTabletModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformEventsComponent, PlatformChangedToTabletModeDelegate), Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformEventsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformEventsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformEventsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformEventsComponent_Statics::ClassParams = {
		&UPlatformEventsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlatformEventsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformEventsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformEventsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformEventsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformEventsComponent, 1873744500);
	template<> ENGINE_API UClass* StaticClass<UPlatformEventsComponent>()
	{
		return UPlatformEventsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformEventsComponent(Z_Construct_UClass_UPlatformEventsComponent, &UPlatformEventsComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformEventsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformEventsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

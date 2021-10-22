// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/Controllers/LiveLinkTransformController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformController() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkTransformController_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkTransformController();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
class UScriptStruct* FLiveLinkTransformControllerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKCOMPONENTS_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, Z_Construct_UPackage__Script_LiveLinkComponents(), TEXT("LiveLinkTransformControllerData"), sizeof(FLiveLinkTransformControllerData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Hash());
	}
	return Singleton;
}
template<> LIVELINKCOMPONENTS_API UScriptStruct* StaticStruct<FLiveLinkTransformControllerData>()
{
	return FLiveLinkTransformControllerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTransformControllerData(FLiveLinkTransformControllerData::StaticStruct, TEXT("/Script/LiveLinkComponents"), TEXT("LiveLinkTransformControllerData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkComponents_StaticRegisterNativesFLiveLinkTransformControllerData
{
	FScriptStruct_LiveLinkComponents_StaticRegisterNativesFLiveLinkTransformControllerData()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkTransformControllerData>(FName(TEXT("LiveLinkTransformControllerData")));
	}
} ScriptStruct_LiveLinkComponents_StaticRegisterNativesFLiveLinkTransformControllerData;
	struct Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldTransform_MetaData[];
#endif
		static void NewProp_bWorldTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLocation_MetaData[];
#endif
		static void NewProp_bUseLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRotation_MetaData[];
#endif
		static void NewProp_bUseRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseScale_MetaData[];
#endif
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[];
#endif
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformControllerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Set the transform of the component in world space of in its local reference frame. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Set the transform of the component in world space of in its local reference frame." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_SetBit(void* Obj)
	{
		((FLiveLinkTransformControllerData*)Obj)->bWorldTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform = { "bWorldTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Whether we should set the owning actor's location with the value coming from live link. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we should set the owning actor's location with the value coming from live link." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_SetBit(void* Obj)
	{
		((FLiveLinkTransformControllerData*)Obj)->bUseLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation = { "bUseLocation", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Whether we should set the owning actor's rotation with the value coming from live link. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we should set the owning actor's rotation with the value coming from live link." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_SetBit(void* Obj)
	{
		((FLiveLinkTransformControllerData*)Obj)->bUseRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation = { "bUseRotation", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Whether we should set the owning actor's scale with the value coming from live link. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we should set the owning actor's scale with the value coming from live link." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((FLiveLinkTransformControllerData*)Obj)->bUseScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 * Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\nOnly the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((FLiveLinkTransformControllerData*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 * If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 * If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 * If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we teleport the physics state (if physics collision is enabled for this object).\nIf true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\nIf false, physics velocity is updated based on the change in position (affecting ragdoll parts).\nIf CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((FLiveLinkTransformControllerData*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
		nullptr,
		&NewStructOps,
		"LiveLinkTransformControllerData",
		sizeof(FLiveLinkTransformControllerData),
		alignof(FLiveLinkTransformControllerData),
		Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkComponents();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTransformControllerData"), sizeof(FLiveLinkTransformControllerData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Hash() { return 3022520710U; }
	void ULiveLinkTransformController::StaticRegisterNativesULiveLinkTransformController()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkTransformController_NoRegister()
	{
		return ULiveLinkTransformController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTransformController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTransformController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "IncludePath", "Controllers/LiveLinkTransformController.h" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTransformController, ComponentToControl_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTransformController, TransformData), Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTransformController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformController_Statics::ClassParams = {
		&ULiveLinkTransformController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTransformController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkTransformController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkTransformController, 2336782873);
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkTransformController>()
	{
		return ULiveLinkTransformController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkTransformController(Z_Construct_UClass_ULiveLinkTransformController, &ULiveLinkTransformController::StaticClass, TEXT("/Script/LiveLinkComponents"), TEXT("ULiveLinkTransformController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

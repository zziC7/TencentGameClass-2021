// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/LiveLinkComponentController.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentController() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics
	{
		struct _Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLinkComponents, nullptr, "LiveLinkTickDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ULiveLinkComponentController::StaticRegisterNativesULiveLinkComponentController()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister()
	{
		return ULiveLinkComponentController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectRepresentation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerMap_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControllerMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ControllerMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateInEditor_MetaData[];
#endif
		static void NewProp_bUpdateInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLiveLinkUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveLinkUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData[];
#endif
		static void NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableEvaluateLiveLinkWhenSpawnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateLiveLink_MetaData[];
#endif
		static void NewProp_bEvaluateLiveLink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateLiveLink;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LiveLink" },
		{ "DisplayName", "LiveLink Controller" },
		{ "IncludePath", "LiveLinkComponentController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation = { "SubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, SubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0012000822080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, Controller_DEPRECATED), Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Instanced controllers used to control the desired role */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Instanced controllers used to control the desired role" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp = { "ControllerMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_Key_KeyProp = { "ControllerMap_Key", nullptr, (EPropertyFlags)0x0006000000080009, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Instanced controllers used to control the desired role */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Instanced controllers used to control the desired role" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap = { "ControllerMap", nullptr, (EPropertyFlags)0x001000820200001d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, ControllerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bUpdateInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor = { "bUpdateInEditor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time new LiveLink data is available, including in the editor\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "This Event is triggered any time new LiveLink data is available, including in the editor" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated = { "OnLiveLinkUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, OnLiveLinkUpdated), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl_MetaData[] = {
		{ "AllowedClasses", "ActorComponent" },
		{ "Category", "LiveLink" },
		{ "DisallowedClasses", "LiveLinkComponentController" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, ComponentToControl), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If true, will not evaluate LiveLink if the attached actor is a spawnable in Sequencer\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If true, will not evaluate LiveLink if the attached actor is a spawnable in Sequencer" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bDisableEvaluateLiveLinkWhenSpawnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable = { "bDisableEvaluateLiveLinkWhenSpawnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If false, will not evaluate live link, effectively pausing.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If false, will not evaluate live link, effectively pausing." },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bEvaluateLiveLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink = { "bEvaluateLiveLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams = {
		&ULiveLinkComponentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponentController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkComponentController, 2092459867);
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentController>()
	{
		return ULiveLinkComponentController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkComponentController(Z_Construct_UClass_ULiveLinkComponentController, &ULiveLinkComponentController::StaticClass, TEXT("/Script/LiveLinkComponents"), TEXT("ULiveLinkComponentController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentController);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkComponentController)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

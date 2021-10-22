// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkDrivenComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkDrivenComponent() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
// End Cross Module References
	void UDEPRECATED_LiveLinkDrivenComponent::StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister()
	{
		return UDEPRECATED_LiveLinkDrivenComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTransformBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorTransformBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModifyActorTransform_MetaData[];
#endif
		static void NewProp_bModifyActorTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyActorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetRelativeLocation_MetaData[];
#endif
		static void NewProp_bSetRelativeLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetRelativeLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/** A component that applies data from Live Link to the owning actor */" },
		{ "IncludePath", "LiveLinkDrivenComponent.h" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "A component that applies data from Live Link to the owning actor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// The name of the live link subject to take data from\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The name of the live link subject to take data from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_LiveLinkDrivenComponent, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// The name of the bone to drive the actors transform with (if None then we will take the first bone)\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "The name of the bone to drive the actors transform with (if None then we will take the first bone)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone = { "ActorTransformBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_LiveLinkDrivenComponent, ActorTransformBone), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// Should the actors transform be driven by live link\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "Should the actors transform be driven by live link" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_SetBit(void* Obj)
	{
		((UDEPRECATED_LiveLinkDrivenComponent*)Obj)->bModifyActorTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform = { "bModifyActorTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDEPRECATED_LiveLinkDrivenComponent), &Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// Should the transform from live link be treated as relative or world space\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "Should the transform from live link be treated as relative or world space" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_SetBit(void* Obj)
	{
		((UDEPRECATED_LiveLinkDrivenComponent*)Obj)->bSetRelativeLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation = { "bSetRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDEPRECATED_LiveLinkDrivenComponent), &Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_LiveLinkDrivenComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::ClassParams = {
		&UDEPRECATED_LiveLinkDrivenComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_LiveLinkDrivenComponent, 1489753650);
	template<> LIVELINK_API UClass* StaticClass<UDEPRECATED_LiveLinkDrivenComponent>()
	{
		return UDEPRECATED_LiveLinkDrivenComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_LiveLinkDrivenComponent(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent, &UDEPRECATED_LiveLinkDrivenComponent::StaticClass, TEXT("/Script/LiveLink"), TEXT("UDEPRECATED_LiveLinkDrivenComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_LiveLinkDrivenComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

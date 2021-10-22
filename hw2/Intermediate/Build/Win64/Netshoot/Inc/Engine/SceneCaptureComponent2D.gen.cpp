// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(USceneCaptureComponent2D::execCaptureScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneCaptureComponent2D::execRemoveBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBlendable(Z_Param_InBlendableObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneCaptureComponent2D::execAddOrUpdateBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
		P_NATIVE_END;
	}
	void USceneCaptureComponent2D::StaticRegisterNativesUSceneCaptureComponent2D()
	{
		UClass* Class = USceneCaptureComponent2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &USceneCaptureComponent2D::execAddOrUpdateBlendable },
			{ "CaptureScene", &USceneCaptureComponent2D::execCaptureScene },
			{ "RemoveBlendable", &USceneCaptureComponent2D::execRemoveBlendable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics
	{
		struct SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, sizeof(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** \n\x09 * Render the scene to the texture target immediately.  \n\x09 * This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "CaptureScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics
	{
		struct SceneCaptureComponent2D_eventRemoveBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SceneCaptureComponent2D_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Removes a blendable. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Removes a blendable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "RemoveBlendable", nullptr, nullptr, sizeof(SceneCaptureComponent2D_eventRemoveBlendable_Parms), Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister()
	{
		return USceneCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_USceneCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompositeMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CustomNearClippingPlane_MetaData[];
#endif
		static void NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CustomNearClippingPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomNearClippingPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomNearClippingPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomProjectionMatrix_MetaData[];
#endif
		static void NewProp_bUseCustomProjectionMatrix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomProjectionMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomProjectionMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomProjectionMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableClipPlane_MetaData[];
#endif
		static void NewProp_bEnableClipPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipPlaneBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipPlaneNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraCutThisFrame_MetaData[];
#endif
		static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[];
#endif
		static void NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableFlipCopyGLES_MetaData[];
#endif
		static void NewProp_bDisableFlipCopyGLES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableFlipCopyGLES;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USceneCaptureComponent2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 1353913330
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene, "CaptureScene" }, // 2137430986
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable, "RemoveBlendable" }, // 4127384875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Category", "Projection" },
		{ "DisplayName", "Projection Type" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, ProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Camera field of view (in degrees). */" },
		{ "DisplayName", "Field of View" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Camera field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, FOVAngle), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, OrthoWidth), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Output render target of the scene capture that can be read in materals. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Output render target of the scene capture that can be read in materals." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** When enabled, the scene capture will composite into the render target instead of overwriting its contents. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "When enabled, the scene capture will composite into the render target instead of overwriting its contents." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode = { "CompositeMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, CompositeMode), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Projection" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bOverride_CustomNearClippingPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane = { "bOverride_CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** \n\x09 * Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane.\n\x09 */" },
		{ "editcondition", "bOverride_CustomNearClippingPlane" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane = { "CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, CustomNearClippingPlane), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling" },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bUseCustomProjectionMatrix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix = { "bUseCustomProjectionMatrix", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The custom projection matrix to use */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "The custom projection matrix to use" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix = { "CustomProjectionMatrix", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, CustomProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** \n\x09 * Enables a clip plane while rendering the scene capture which is useful for portals.  \n\x09 * The global clip plane must be enabled in the renderer project settings for this to work.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Enables a clip plane while rendering the scene capture which is useful for portals.\nThe global clip plane must be enabled in the renderer project settings for this to work." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bEnableClipPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane = { "bEnableClipPlane", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Base position for the clip plane, can be any position on the plane. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Base position for the clip plane, can be any position on the plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase = { "ClipPlaneBase", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Normal for the plane. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Normal for the plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal = { "ClipPlaneNormal", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** \n\x09 * True if we did a camera cut this frame. Automatically reset to false at every capture.\n\x09 * This flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\n\x09 * Similar to UPlayerCameraManager::bGameCameraCutThisFrame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "True if we did a camera cut this frame. Automatically reset to false at every capture.\nThis flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\nSimilar to UPlayerCameraManager::bGameCameraCutThisFrame." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bCameraCutThisFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Treat unrendered opaque pixels as fully translucent. This is important for effects such as exponential weight fog, so it does not get applied on unrendered opaque pixels. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Treat unrendered opaque pixels as fully translucent. This is important for effects such as exponential weight fog, so it does not get applied on unrendered opaque pixels." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent = { "bConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** \n\x09 * Scene captures render an extra flip pass for LDR color on GLES so that the final output is oriented correctly.\n\x09 * This check disabled the extra flip pass, improving performance, but causes the capture to be flipped vertically.\n\x09 * (Does not affect scene captures on other non-GLES renderers or with non-LDR output)\n\x09 */" },
		{ "DisplayName", "Disable Flip Copy GLES" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Scene captures render an extra flip pass for LDR color on GLES so that the final output is oriented correctly.\nThis check disabled the extra flip pass, improving performance, but causes the capture to be flipped vertically.\n(Does not affect scene captures on other non-GLES renderers or with non-LDR output)" },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bDisableFlipCopyGLES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES = { "bDisableFlipCopyGLES", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bDisableFlipCopyGLES,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponent2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::ClassParams = {
		&USceneCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCaptureComponent2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneCaptureComponent2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneCaptureComponent2D, 3728182870);
	template<> ENGINE_API UClass* StaticClass<USceneCaptureComponent2D>()
	{
		return USceneCaptureComponent2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponent2D(Z_Construct_UClass_USceneCaptureComponent2D, &USceneCaptureComponent2D::StaticClass, TEXT("/Script/Engine"), TEXT("USceneCaptureComponent2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent2D);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent2D)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

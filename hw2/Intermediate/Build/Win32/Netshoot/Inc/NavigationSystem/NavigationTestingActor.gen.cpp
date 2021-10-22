// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavigationTestingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTestingActor() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavCostDisplay();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister();
// End Cross Module References
	static UEnum* ENavCostDisplay_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavCostDisplay"));
		}
		return Singleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavCostDisplay::Type>()
	{
		return ENavCostDisplay_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavCostDisplay(ENavCostDisplay_StaticEnum, TEXT("/Script/NavigationSystem"), TEXT("ENavCostDisplay"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Hash() { return 1306332725U; }
	UEnum* Z_Construct_UEnum_NavigationSystem_ENavCostDisplay()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavCostDisplay"), 0, Get_Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavCostDisplay::TotalCost", (int64)ENavCostDisplay::TotalCost },
				{ "ENavCostDisplay::HeuristicOnly", (int64)ENavCostDisplay::HeuristicOnly },
				{ "ENavCostDisplay::RealCostOnly", (int64)ENavCostDisplay::RealCostOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HeuristicOnly.Name", "ENavCostDisplay::HeuristicOnly" },
				{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
				{ "RealCostOnly.Name", "ENavCostDisplay::RealCostOnly" },
				{ "TotalCost.Name", "ENavCostDisplay::TotalCost" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
				nullptr,
				"ENavCostDisplay",
				"ENavCostDisplay::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ANavigationTestingActor::StaticRegisterNativesANavigationTestingActor()
	{
	}
	UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister()
	{
		return ANavigationTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationTestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvokerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvokerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActAsNavigationInvoker_MetaData[];
#endif
		static void NewProp_bActAsNavigationInvoker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActAsNavigationInvoker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryingExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryingExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectedLocationValid_MetaData[];
#endif
		static void NewProp_bProjectedLocationValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectedLocationValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSearchStart_MetaData[];
#endif
		static void NewProp_bSearchStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostLimitFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CostLimitFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumCostLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumCostLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBacktracking_MetaData[];
#endif
		static void NewProp_bBacktracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBacktracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHierarchicalPathfinding_MetaData[];
#endif
		static void NewProp_bUseHierarchicalPathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHierarchicalPathfinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGatherDetailedInfo_MetaData[];
#endif
		static void NewProp_bGatherDetailedInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGatherDetailedInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDistanceToWall_MetaData[];
#endif
		static void NewProp_bDrawDistanceToWall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDistanceToWall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNodePool_MetaData[];
#endif
		static void NewProp_bShowNodePool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNodePool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBestPath_MetaData[];
#endif
		static void NewProp_bShowBestPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBestPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDiffWithPreviousStep_MetaData[];
#endif
		static void NewProp_bShowDiffWithPreviousStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDiffWithPreviousStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[];
#endif
		static void NewProp_bShouldBeVisibleInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostDisplayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CostDisplayMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCanvasOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextCanvasOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathExist_MetaData[];
#endif
		static void NewProp_bPathExist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathExist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathIsPartial_MetaData[];
#endif
		static void NewProp_bPathIsPartial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathIsPartial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathSearchOutOfNodes_MetaData[];
#endif
		static void NewProp_bPathSearchOutOfNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathSearchOutOfNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfindingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathfindingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathfindingSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathfindingSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowStepIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShowStepIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetFromCornersDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetFromCornersDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Actor Input Rendering Replication LOD Cooking" },
		{ "IncludePath", "NavigationTestingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp_MetaData[] = {
		{ "Comment", "/** Editor Preview */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, EdRenderComp), Z_Construct_UClass_UNavTestRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditCondition", "bActAsNavigationInvoker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent = { "InvokerComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, InvokerComponent), Z_Construct_UClass_UNavigationInvokerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_MetaData[] = {
		{ "Category", "Navigation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bActAsNavigationInvoker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker = { "bActAsNavigationInvoker", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent_MetaData[] = {
		{ "Category", "Agent" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent = { "QueryingExtent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, QueryingExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation_MetaData[] = {
		{ "Category", "AgentStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation = { "ProjectedLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_MetaData[] = {
		{ "Category", "AgentStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bProjectedLocationValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid = { "bProjectedLocationValid", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, start the search from this actor, else start the search from the other actor */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, start the search from this actor, else start the search from the other actor" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bSearchStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart = { "bSearchStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0" },
		{ "Comment", "/** this multiplier is used to compute a max node cost allowed to the open list\n\x09 *\x09(cost limit = CostLimitFacotr*InitialHeuristicEstimate) */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "this multiplier is used to compute a max node cost allowed to the open list\n    (cost limit = CostLimitFacotr*InitialHeuristicEstimate)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor = { "CostLimitFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, CostLimitFactor), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0" },
		{ "Comment", "/** minimum cost limit clamping value (in cost units)\n\x09 *\x09used to allow large deviation in short paths */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "minimum cost limit clamping value (in cost units)\n    used to allow large deviation in short paths" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit = { "MinimumCostLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, MinimumCostLimit), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** Instead of regular pathfinding from source to target location do\n\x09 *\x09""a 'backwards' search that searches from the source, but as if the allowed\n\x09 *\x09movement direction was coming from the target. Meaningful only for paths\n\x09 *\x09""containing one-direction nav links. */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Instead of regular pathfinding from source to target location do\n    a 'backwards' search that searches from the source, but as if the allowed\n    movement direction was coming from the target. Meaningful only for paths\n    containing one-direction nav links." },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bBacktracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking = { "bBacktracking", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bUseHierarchicalPathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding = { "bUseHierarchicalPathfinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, all steps of A* algorithm will be accessible for debugging */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, all steps of A* algorithm will be accessible for debugging" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bGatherDetailedInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo = { "bGatherDetailedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_MetaData[] = {
		{ "Category", "Query" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bDrawDistanceToWall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall = { "bDrawDistanceToWall", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show polys from open (orange) and closed (yellow) sets */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show polys from open (orange) and closed (yellow) sets" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShowNodePool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool = { "bShowNodePool", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show current best path */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show current best path" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShowBestPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath = { "bShowBestPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show which nodes were modified in current A* step */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show which nodes were modified in current A* step" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShowDiffWithPreviousStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep = { "bShowDiffWithPreviousStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShouldBeVisibleInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame = { "bShouldBeVisibleInGame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** determines which cost will be shown*/" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "determines which cost will be shown" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode = { "CostDisplayMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, CostDisplayMode), Z_Construct_UEnum_NavigationSystem_ENavCostDisplay, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** text canvas offset to apply */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "text canvas offset to apply" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset = { "TextCanvasOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, TextCanvasOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bPathExist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist = { "bPathExist", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bPathIsPartial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial = { "bPathIsPartial", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bPathSearchOutOfNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes = { "bPathSearchOutOfNodes", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "Comment", "/** Time in micro seconds */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Time in micro seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime = { "PathfindingTime", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, PathfindingTime), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost = { "PathCost", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, PathCost), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps = { "PathfindingSteps", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, PathfindingSteps), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, OtherActor), Z_Construct_UClass_ANavigationTestingActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex = { "ShowStepIndex", nullptr, (EPropertyFlags)0x0010000000002801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, ShowStepIndex), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance = { "OffsetFromCornersDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationTestingActor, OffsetFromCornersDistance), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationTestingActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavAgentInterface), false },
			{ Z_Construct_UClass_UNavPathObserverInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavPathObserverInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationTestingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams = {
		&ANavigationTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationTestingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationTestingActor, 2183376486);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationTestingActor>()
	{
		return ANavigationTestingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationTestingActor(Z_Construct_UClass_ANavigationTestingActor, &ANavigationTestingActor::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavigationTestingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationTestingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

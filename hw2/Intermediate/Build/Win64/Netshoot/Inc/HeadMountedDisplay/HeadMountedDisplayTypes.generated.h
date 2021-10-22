// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHandKeypoint : uint8;
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h
#error "HeadMountedDisplayTypes.generated.h already included, missing '#pragma once' in HeadMountedDisplayTypes.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRMotionControllerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRMotionControllerData>();

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRHMDData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRHMDData>();

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_HandKeypointToInt32);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_HandKeypointToInt32);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandKeypointConversion(); \
	friend struct Z_Construct_UClass_UHandKeypointConversion_Statics; \
public: \
	DECLARE_CLASS(UHandKeypointConversion, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHandKeypointConversion)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_INCLASS \
private: \
	static void StaticRegisterNativesUHandKeypointConversion(); \
	friend struct Z_Construct_UClass_UHandKeypointConversion_Statics; \
public: \
	DECLARE_CLASS(UHandKeypointConversion, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHandKeypointConversion)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandKeypointConversion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandKeypointConversion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandKeypointConversion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandKeypointConversion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandKeypointConversion(UHandKeypointConversion&&); \
	NO_API UHandKeypointConversion(const UHandKeypointConversion&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandKeypointConversion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandKeypointConversion(UHandKeypointConversion&&); \
	NO_API UHandKeypointConversion(const UHandKeypointConversion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandKeypointConversion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandKeypointConversion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandKeypointConversion)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_273_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_276_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UHandKeypointConversion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h


#define FOREACH_ENUM_EXRVISUALTYPE(op) \
	op(EXRVisualType::Controller) \
	op(EXRVisualType::Hand) 

enum class EXRVisualType : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRVisualType>();

#define FOREACH_ENUM_EHANDKEYPOINT(op) \
	op(EHandKeypoint::Palm) \
	op(EHandKeypoint::Wrist) \
	op(EHandKeypoint::ThumbMetacarpal) \
	op(EHandKeypoint::ThumbProximal) \
	op(EHandKeypoint::ThumbDistal) \
	op(EHandKeypoint::ThumbTip) \
	op(EHandKeypoint::IndexMetacarpal) \
	op(EHandKeypoint::IndexProximal) \
	op(EHandKeypoint::IndexIntermediate) \
	op(EHandKeypoint::IndexDistal) \
	op(EHandKeypoint::IndexTip) \
	op(EHandKeypoint::MiddleMetacarpal) \
	op(EHandKeypoint::MiddleProximal) \
	op(EHandKeypoint::MiddleIntermediate) \
	op(EHandKeypoint::MiddleDistal) \
	op(EHandKeypoint::MiddleTip) \
	op(EHandKeypoint::RingMetacarpal) \
	op(EHandKeypoint::RingProximal) \
	op(EHandKeypoint::RingIntermediate) \
	op(EHandKeypoint::RingDistal) \
	op(EHandKeypoint::RingTip) \
	op(EHandKeypoint::LittleMetacarpal) \
	op(EHandKeypoint::LittleProximal) \
	op(EHandKeypoint::LittleIntermediate) \
	op(EHandKeypoint::LittleDistal) \
	op(EHandKeypoint::LittleTip) 

enum class EHandKeypoint : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHandKeypoint>();

#define FOREACH_ENUM_EXRTRACKEDDEVICETYPE(op) \
	op(EXRTrackedDeviceType::HeadMountedDisplay) \
	op(EXRTrackedDeviceType::Controller) \
	op(EXRTrackedDeviceType::TrackingReference) \
	op(EXRTrackedDeviceType::Other) \
	op(EXRTrackedDeviceType::Invalid) \
	op(EXRTrackedDeviceType::Any) 

enum class EXRTrackedDeviceType : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>();

#define FOREACH_ENUM_ESPECTATORSCREENMODE(op) \
	op(ESpectatorScreenMode::Disabled) \
	op(ESpectatorScreenMode::SingleEyeLetterboxed) \
	op(ESpectatorScreenMode::Undistorted) \
	op(ESpectatorScreenMode::Distorted) \
	op(ESpectatorScreenMode::SingleEye) \
	op(ESpectatorScreenMode::SingleEyeCroppedToFill) \
	op(ESpectatorScreenMode::Texture) \
	op(ESpectatorScreenMode::TexturePlusEye) 

enum class ESpectatorScreenMode : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>();

#define FOREACH_ENUM_EXRSYSTEMFLAGS(op) \
	op(EXRSystemFlags::NoFlags) \
	op(EXRSystemFlags::IsAR) \
	op(EXRSystemFlags::IsTablet) \
	op(EXRSystemFlags::IsHeadMounted) \
	op(EXRSystemFlags::SupportsHandTracking) 
#define FOREACH_ENUM_EXRDEVICECONNECTIONRESULT(op) \
	op(EXRDeviceConnectionResult::NoTrackingSystem) \
	op(EXRDeviceConnectionResult::FeatureNotSupported) \
	op(EXRDeviceConnectionResult::NoValidViewport) \
	op(EXRDeviceConnectionResult::MiscFailure) \
	op(EXRDeviceConnectionResult::Success) 
#define FOREACH_ENUM_EHMDWORNSTATE(op) \
	op(EHMDWornState::Unknown) \
	op(EHMDWornState::Worn) \
	op(EHMDWornState::NotWorn) 
#define FOREACH_ENUM_EHMDTRACKINGORIGIN(op) \
	op(EHMDTrackingOrigin::Floor) \
	op(EHMDTrackingOrigin::Eye) \
	op(EHMDTrackingOrigin::Stage) 
#define FOREACH_ENUM_EORIENTPOSITIONSELECTOR(op) \
	op(EOrientPositionSelector::Orientation) \
	op(EOrientPositionSelector::Position) \
	op(EOrientPositionSelector::OrientationAndPosition) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

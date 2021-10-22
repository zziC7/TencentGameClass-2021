// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OODLENETWORKHANDLERCOMPONENT_OodleNetworkHandlerComponent_generated_h
#error "OodleNetworkHandlerComponent.generated.h already included, missing '#pragma once' in OodleNetworkHandlerComponent.h"
#endif
#define OODLENETWORKHANDLERCOMPONENT_OodleNetworkHandlerComponent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h


#define FOREACH_ENUM_EOODLEENABLEMODE(op) \
	op(EOodleEnableMode::AlwaysEnabled) \
	op(EOodleEnableMode::WhenCompressedPacketReceived) 

enum class EOodleEnableMode : uint8;
template<> OODLENETWORKHANDLERCOMPONENT_API UEnum* StaticEnum<EOodleEnableMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

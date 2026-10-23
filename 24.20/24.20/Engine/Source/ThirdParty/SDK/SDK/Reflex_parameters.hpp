#pragma once

#include "Basic.hpp"

#include "Reflex_structs.hpp"

namespace SDK::Params
{

struct ReflexBlueprintLibrary_GetFlashIndicatorEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ReflexBlueprintLibrary_GetFlashIndicatorEnabled) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_GetFlashIndicatorEnabled");
static_assert(sizeof(ReflexBlueprintLibrary_GetFlashIndicatorEnabled) == 0x000001, "Wrong size on ReflexBlueprintLibrary_GetFlashIndicatorEnabled");
static_assert(offsetof(ReflexBlueprintLibrary_GetFlashIndicatorEnabled, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetFlashIndicatorEnabled::ReturnValue' has a wrong offset!");

struct ReflexBlueprintLibrary_GetGameLatencyInMs final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ReflexBlueprintLibrary_GetGameLatencyInMs) == 0x000004, "Wrong alignment on ReflexBlueprintLibrary_GetGameLatencyInMs");
static_assert(sizeof(ReflexBlueprintLibrary_GetGameLatencyInMs) == 0x000004, "Wrong size on ReflexBlueprintLibrary_GetGameLatencyInMs");
static_assert(offsetof(ReflexBlueprintLibrary_GetGameLatencyInMs, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetGameLatencyInMs::ReturnValue' has a wrong offset!");

struct ReflexBlueprintLibrary_GetGameToRenderLatencyInMs final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ReflexBlueprintLibrary_GetGameToRenderLatencyInMs) == 0x000004, "Wrong alignment on ReflexBlueprintLibrary_GetGameToRenderLatencyInMs");
static_assert(sizeof(ReflexBlueprintLibrary_GetGameToRenderLatencyInMs) == 0x000004, "Wrong size on ReflexBlueprintLibrary_GetGameToRenderLatencyInMs");
static_assert(offsetof(ReflexBlueprintLibrary_GetGameToRenderLatencyInMs, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetGameToRenderLatencyInMs::ReturnValue' has a wrong offset!");

struct ReflexBlueprintLibrary_GetReflexAvailable final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ReflexBlueprintLibrary_GetReflexAvailable) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_GetReflexAvailable");
static_assert(sizeof(ReflexBlueprintLibrary_GetReflexAvailable) == 0x000001, "Wrong size on ReflexBlueprintLibrary_GetReflexAvailable");
static_assert(offsetof(ReflexBlueprintLibrary_GetReflexAvailable, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetReflexAvailable::ReturnValue' has a wrong offset!");

struct ReflexBlueprintLibrary_GetReflexMode final
{
public:
	EReflexMode                                   ReturnValue;
};
static_assert(alignof(ReflexBlueprintLibrary_GetReflexMode) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_GetReflexMode");
static_assert(sizeof(ReflexBlueprintLibrary_GetReflexMode) == 0x000001, "Wrong size on ReflexBlueprintLibrary_GetReflexMode");
static_assert(offsetof(ReflexBlueprintLibrary_GetReflexMode, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetReflexMode::ReturnValue' has a wrong offset!");

struct ReflexBlueprintLibrary_GetRenderLatencyInMs final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ReflexBlueprintLibrary_GetRenderLatencyInMs) == 0x000004, "Wrong alignment on ReflexBlueprintLibrary_GetRenderLatencyInMs");
static_assert(sizeof(ReflexBlueprintLibrary_GetRenderLatencyInMs) == 0x000004, "Wrong size on ReflexBlueprintLibrary_GetRenderLatencyInMs");
static_assert(offsetof(ReflexBlueprintLibrary_GetRenderLatencyInMs, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetRenderLatencyInMs::ReturnValue' has a wrong offset!");

struct ReflexBlueprintLibrary_SetFlashIndicatorEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(ReflexBlueprintLibrary_SetFlashIndicatorEnabled) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_SetFlashIndicatorEnabled");
static_assert(sizeof(ReflexBlueprintLibrary_SetFlashIndicatorEnabled) == 0x000001, "Wrong size on ReflexBlueprintLibrary_SetFlashIndicatorEnabled");
static_assert(offsetof(ReflexBlueprintLibrary_SetFlashIndicatorEnabled, bEnabled) == 0x000000, "Member 'ReflexBlueprintLibrary_SetFlashIndicatorEnabled::bEnabled' has a wrong offset!");

struct ReflexBlueprintLibrary_SetReflexMode final
{
public:
	EReflexMode                                   Mode;
};
static_assert(alignof(ReflexBlueprintLibrary_SetReflexMode) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_SetReflexMode");
static_assert(sizeof(ReflexBlueprintLibrary_SetReflexMode) == 0x000001, "Wrong size on ReflexBlueprintLibrary_SetReflexMode");
static_assert(offsetof(ReflexBlueprintLibrary_SetReflexMode, Mode) == 0x000000, "Member 'ReflexBlueprintLibrary_SetReflexMode::Mode' has a wrong offset!");

}

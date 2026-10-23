#pragma once

#include "Basic.hpp"

#include "StormShieldModifierRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned final
{
public:
	class AFortSafeZoneIndicator*                 SafeZoneIndicator;
};
static_assert(alignof(FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned) == 0x000008, "Wrong alignment on FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned");
static_assert(sizeof(FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned) == 0x000008, "Wrong size on FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned");
static_assert(offsetof(FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned, SafeZoneIndicator) == 0x000000, "Member 'FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned::SafeZoneIndicator' has a wrong offset!");

struct FortAthenaMutator_SplitStorm_SetProxyCenter final
{
public:
	struct FVector                                NewCenter;
};
static_assert(alignof(FortAthenaMutator_SplitStorm_SetProxyCenter) == 0x000008, "Wrong alignment on FortAthenaMutator_SplitStorm_SetProxyCenter");
static_assert(sizeof(FortAthenaMutator_SplitStorm_SetProxyCenter) == 0x000018, "Wrong size on FortAthenaMutator_SplitStorm_SetProxyCenter");
static_assert(offsetof(FortAthenaMutator_SplitStorm_SetProxyCenter, NewCenter) == 0x000000, "Member 'FortAthenaMutator_SplitStorm_SetProxyCenter::NewCenter' has a wrong offset!");

struct FortAthenaMutator_SplitStorm_SetProxyRadius final
{
public:
	float                                         NewRadius;
};
static_assert(alignof(FortAthenaMutator_SplitStorm_SetProxyRadius) == 0x000004, "Wrong alignment on FortAthenaMutator_SplitStorm_SetProxyRadius");
static_assert(sizeof(FortAthenaMutator_SplitStorm_SetProxyRadius) == 0x000004, "Wrong size on FortAthenaMutator_SplitStorm_SetProxyRadius");
static_assert(offsetof(FortAthenaMutator_SplitStorm_SetProxyRadius, NewRadius) == 0x000000, "Member 'FortAthenaMutator_SplitStorm_SetProxyRadius::NewRadius' has a wrong offset!");

struct FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase final
{
public:
	ESplitStormProxyPhase                         NewPhase;
};
static_assert(alignof(FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase) == 0x000001, "Wrong alignment on FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase");
static_assert(sizeof(FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase) == 0x000001, "Wrong size on FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase");
static_assert(offsetof(FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase, NewPhase) == 0x000000, "Member 'FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase::NewPhase' has a wrong offset!");

}

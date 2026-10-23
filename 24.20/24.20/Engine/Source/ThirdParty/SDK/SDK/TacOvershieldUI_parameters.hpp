#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged final
{
public:
	float                                         Overshield;
	float                                         OvershieldMax;
};
static_assert(alignof(TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged) == 0x000004, "Wrong alignment on TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged");
static_assert(sizeof(TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged) == 0x000008, "Wrong size on TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged");
static_assert(offsetof(TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged, Overshield) == 0x000000, "Member 'TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged::Overshield' has a wrong offset!");
static_assert(offsetof(TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged, OvershieldMax) == 0x000004, "Member 'TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged::OvershieldMax' has a wrong offset!");

struct TacOvershieldPlayerInfoWidget_OnPlayerStateSet final
{
public:
	class AFortPlayerStateAthena*                 InPlayerState;
};
static_assert(alignof(TacOvershieldPlayerInfoWidget_OnPlayerStateSet) == 0x000008, "Wrong alignment on TacOvershieldPlayerInfoWidget_OnPlayerStateSet");
static_assert(sizeof(TacOvershieldPlayerInfoWidget_OnPlayerStateSet) == 0x000008, "Wrong size on TacOvershieldPlayerInfoWidget_OnPlayerStateSet");
static_assert(offsetof(TacOvershieldPlayerInfoWidget_OnPlayerStateSet, InPlayerState) == 0x000000, "Member 'TacOvershieldPlayerInfoWidget_OnPlayerStateSet::InPlayerState' has a wrong offset!");

}

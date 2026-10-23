#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged final
{
public:
	class AFortPlayerStateAthena*                 PlayerState;
	bool                                          bIsDead;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged) == 0x000008, "Wrong alignment on EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged");
static_assert(sizeof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged) == 0x000010, "Wrong size on EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged");
static_assert(offsetof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged, PlayerState) == 0x000000, "Member 'EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged::PlayerState' has a wrong offset!");
static_assert(offsetof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged, bIsDead) == 0x000008, "Member 'EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged::bIsDead' has a wrong offset!");

struct EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet final
{
public:
	class AFortPlayerStateAthena*                 InPlayerState;
};
static_assert(alignof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet) == 0x000008, "Wrong alignment on EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet");
static_assert(sizeof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet) == 0x000008, "Wrong size on EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet");
static_assert(offsetof(EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet, InPlayerState) == 0x000000, "Member 'EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet::InPlayerState' has a wrong offset!");

}

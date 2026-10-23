#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEnergyDrinkStaminaBarOverlayWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x10];

public:
	void OnPlayerDeadStateChanged(class AFortPlayerStateAthena* PlayerState, bool bIsDead);
	void OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnergyDrinkStaminaBarOverlayWidget">();
	}
	static class UEnergyDrinkStaminaBarOverlayWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnergyDrinkStaminaBarOverlayWidget>();
	}
};
static_assert(alignof(UEnergyDrinkStaminaBarOverlayWidget) == 0x000008, "Wrong alignment on UEnergyDrinkStaminaBarOverlayWidget");
static_assert(sizeof(UEnergyDrinkStaminaBarOverlayWidget) == 0x0002E0, "Wrong size on UEnergyDrinkStaminaBarOverlayWidget");

}

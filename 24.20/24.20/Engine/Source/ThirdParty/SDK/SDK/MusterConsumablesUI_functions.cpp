#pragma once

#include "Basic.hpp"

#include "MusterConsumablesUI_classes.hpp"
#include "MusterConsumablesUI_parameters.hpp"

namespace SDK
{

void UEnergyDrinkStaminaBarOverlayWidget::OnPlayerDeadStateChanged(class AFortPlayerStateAthena* PlayerState, bool bIsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnergyDrinkStaminaBarOverlayWidget", "OnPlayerDeadStateChanged");

	Params::EnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged Parms{};

	Parms.PlayerState = PlayerState;
	Parms.bIsDead = bIsDead;

	UObject::ProcessEvent(Func, &Parms);
}

void UEnergyDrinkStaminaBarOverlayWidget::OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnergyDrinkStaminaBarOverlayWidget", "OnPlayerStateSet");

	Params::EnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}

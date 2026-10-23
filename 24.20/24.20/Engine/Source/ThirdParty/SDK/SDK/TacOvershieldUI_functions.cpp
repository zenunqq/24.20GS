#pragma once

#include "Basic.hpp"

#include "TacOvershieldUI_classes.hpp"
#include "TacOvershieldUI_parameters.hpp"

namespace SDK
{

void UTacOvershieldPlayerInfoWidget::OnOvershieldStateChanged(float Overshield, float OvershieldMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacOvershieldPlayerInfoWidget", "OnOvershieldStateChanged");

	Params::TacOvershieldPlayerInfoWidget_OnOvershieldStateChanged Parms{};

	Parms.Overshield = Overshield;
	Parms.OvershieldMax = OvershieldMax;

	UObject::ProcessEvent(Func, &Parms);
}

void UTacOvershieldPlayerInfoWidget::OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacOvershieldPlayerInfoWidget", "OnPlayerStateSet");

	Params::TacOvershieldPlayerInfoWidget_OnPlayerStateSet Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}

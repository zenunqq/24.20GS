#pragma once

#include "Basic.hpp"

#include "RebootRallyEligiblePlayersOnboardingTooltip_classes.hpp"
#include "RebootRallyEligiblePlayersOnboardingTooltip_parameters.hpp"

namespace SDK
{

void URebootRallyEligiblePlayersOnboardingTooltip_C::ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyEligiblePlayersOnboardingTooltip_C", "ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip");

	Params::RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URebootRallyEligiblePlayersOnboardingTooltip_C::Finished_8745633545D14FC376C81C8A09011F8C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyEligiblePlayersOnboardingTooltip_C", "Finished_8745633545D14FC376C81C8A09011F8C");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootRallyEligiblePlayersOnboardingTooltip_C::OnEndTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyEligiblePlayersOnboardingTooltip_C", "OnEndTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootRallyEligiblePlayersOnboardingTooltip_C::OnShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyEligiblePlayersOnboardingTooltip_C", "OnShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}

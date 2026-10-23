#pragma once

#include "Basic.hpp"

#include "WBP_ExpressYourSupportOnboardingTooltip_classes.hpp"
#include "WBP_ExpressYourSupportOnboardingTooltip_parameters.hpp"

namespace SDK
{

void UWBP_ExpressYourSupportOnboardingTooltip_C::ExecuteUbergraph_WBP_ExpressYourSupportOnboardingTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportOnboardingTooltip_C", "ExecuteUbergraph_WBP_ExpressYourSupportOnboardingTooltip");

	Params::WBP_ExpressYourSupportOnboardingTooltip_C_ExecuteUbergraph_WBP_ExpressYourSupportOnboardingTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ExpressYourSupportOnboardingTooltip_C::Finished_D7671D604923598032BE2991D56E36EB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportOnboardingTooltip_C", "Finished_D7671D604923598032BE2991D56E36EB");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportOnboardingTooltip_C::OnEndTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportOnboardingTooltip_C", "OnEndTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportOnboardingTooltip_C::OnShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportOnboardingTooltip_C", "OnShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}

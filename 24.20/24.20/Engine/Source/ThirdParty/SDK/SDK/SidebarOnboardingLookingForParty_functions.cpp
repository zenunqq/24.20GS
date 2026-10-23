#pragma once

#include "Basic.hpp"

#include "SidebarOnboardingLookingForParty_classes.hpp"
#include "SidebarOnboardingLookingForParty_parameters.hpp"

namespace SDK
{

void USidebarOnboardingLookingForParty_C::ExecuteUbergraph_SidebarOnboardingLookingForParty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingLookingForParty_C", "ExecuteUbergraph_SidebarOnboardingLookingForParty");

	Params::SidebarOnboardingLookingForParty_C_ExecuteUbergraph_SidebarOnboardingLookingForParty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarOnboardingLookingForParty_C::Finished_469BDD0E45CC38F76A797EB7FC304743()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingLookingForParty_C", "Finished_469BDD0E45CC38F76A797EB7FC304743");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarOnboardingLookingForParty_C::Finished_852B268C46273AE00023FBA7560B3CDA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingLookingForParty_C", "Finished_852B268C46273AE00023FBA7560B3CDA");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarOnboardingLookingForParty_C::OnEndTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingLookingForParty_C", "OnEndTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarOnboardingLookingForParty_C::OnShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingLookingForParty_C", "OnShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}

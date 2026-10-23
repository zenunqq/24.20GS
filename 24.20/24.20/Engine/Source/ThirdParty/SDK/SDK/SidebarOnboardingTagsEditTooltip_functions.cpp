#pragma once

#include "Basic.hpp"

#include "SidebarOnboardingTagsEditTooltip_classes.hpp"
#include "SidebarOnboardingTagsEditTooltip_parameters.hpp"

namespace SDK
{

void USidebarOnboardingTagsEditTooltip_C::ExecuteUbergraph_SidebarOnboardingTagsEditTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingTagsEditTooltip_C", "ExecuteUbergraph_SidebarOnboardingTagsEditTooltip");

	Params::SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarOnboardingTagsEditTooltip_C::Finished_00D30FD74E4AD96827646281D0AF44AF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingTagsEditTooltip_C", "Finished_00D30FD74E4AD96827646281D0AF44AF");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarOnboardingTagsEditTooltip_C::Finished_AC6DBEA34771A9CA6E4921A9C0BEA216()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingTagsEditTooltip_C", "Finished_AC6DBEA34771A9CA6E4921A9C0BEA216");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarOnboardingTagsEditTooltip_C::OnEndTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingTagsEditTooltip_C", "OnEndTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarOnboardingTagsEditTooltip_C::OnShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarOnboardingTagsEditTooltip_C", "OnShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}

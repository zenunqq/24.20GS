#pragma once

#include "Basic.hpp"

#include "SidebarInteraction_Profile_classes.hpp"
#include "SidebarInteraction_Profile_parameters.hpp"

namespace SDK
{

void USidebarInteraction_Profile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInteraction_Profile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarInteraction_Profile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInteraction_Profile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarInteraction_Profile_C::ExecuteUbergraph_SidebarInteraction_Profile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInteraction_Profile_C", "ExecuteUbergraph_SidebarInteraction_Profile");

	Params::SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarInteraction_Profile_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInteraction_Profile_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarInteraction_Profile_C::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInteraction_Profile_C", "OnInteractionSet");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarInteraction_Profile_C::SetArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInteraction_Profile_C", "SetArrow");

	UObject::ProcessEvent(Func, nullptr);
}

}

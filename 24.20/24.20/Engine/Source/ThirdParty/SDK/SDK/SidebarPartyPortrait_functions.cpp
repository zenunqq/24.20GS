#pragma once

#include "Basic.hpp"

#include "SidebarPartyPortrait_classes.hpp"
#include "SidebarPartyPortrait_parameters.hpp"

namespace SDK
{

void USidebarPartyPortrait_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyPortrait_C", "PreConstruct");

	Params::SidebarPartyPortrait_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPartyPortrait_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyPortrait_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPartyPortrait_C::ExecuteUbergraph_SidebarPartyPortrait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyPortrait_C", "ExecuteUbergraph_SidebarPartyPortrait");

	Params::SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

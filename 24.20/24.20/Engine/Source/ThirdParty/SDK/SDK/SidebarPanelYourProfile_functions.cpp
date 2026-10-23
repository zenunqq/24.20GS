#pragma once

#include "Basic.hpp"

#include "SidebarPanelYourProfile_classes.hpp"
#include "SidebarPanelYourProfile_parameters.hpp"

namespace SDK
{

void USidebarPanelYourProfile_C::ExecuteUbergraph_SidebarPanelYourProfile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelYourProfile_C", "ExecuteUbergraph_SidebarPanelYourProfile");

	Params::SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPanelYourProfile_C::OnFinishedProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelYourProfile_C", "OnFinishedProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarPanelYourProfile_C::OnStartProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelYourProfile_C", "OnStartProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

}

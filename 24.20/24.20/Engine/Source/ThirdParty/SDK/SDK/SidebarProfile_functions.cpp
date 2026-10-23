#pragma once

#include "Basic.hpp"

#include "SidebarProfile_classes.hpp"
#include "SidebarProfile_parameters.hpp"

namespace SDK
{

void USidebarProfile_C::ExecuteUbergraph_SidebarProfile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfile_C", "ExecuteUbergraph_SidebarProfile");

	Params::SidebarProfile_C_ExecuteUbergraph_SidebarProfile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfile_C::OnFinishedProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfile_C", "OnFinishedProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfile_C::OnStartProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfile_C", "OnStartProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

}

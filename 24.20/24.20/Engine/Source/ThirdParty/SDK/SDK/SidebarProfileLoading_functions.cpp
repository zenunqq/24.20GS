#pragma once

#include "Basic.hpp"

#include "SidebarProfileLoading_classes.hpp"
#include "SidebarProfileLoading_parameters.hpp"

namespace SDK
{

void USidebarProfileLoading_C::OnLoadingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileLoading_C", "OnLoadingStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileLoading_C::OnLoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileLoading_C", "OnLoadingFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileLoading_C::ExecuteUbergraph_SidebarProfileLoading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileLoading_C", "ExecuteUbergraph_SidebarProfileLoading");

	Params::SidebarProfileLoading_C_ExecuteUbergraph_SidebarProfileLoading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

#include "Basic.hpp"

#include "SidebarSocialAddingTagWidget_classes.hpp"
#include "SidebarSocialAddingTagWidget_parameters.hpp"

namespace SDK
{

void USidebarSocialAddingTagWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddingTagWidget_C::EventSetTag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "EventSetTag");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddingTagWidget_C::ExecuteUbergraph_SidebarSocialAddingTagWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddingTagWidget_C", "ExecuteUbergraph_SidebarSocialAddingTagWidget");

	Params::SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

#include "Basic.hpp"

#include "SidebarSocialTagFilterCheckboxListEntry_classes.hpp"
#include "SidebarSocialTagFilterCheckboxListEntry_parameters.hpp"

namespace SDK
{

void USidebarSocialTagFilterCheckboxListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagFilterCheckboxListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagFilterCheckboxListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagFilterCheckboxListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagFilterCheckboxListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagFilterCheckboxListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagFilterCheckboxListEntry_C::ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagFilterCheckboxListEntry_C", "ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry");

	Params::SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

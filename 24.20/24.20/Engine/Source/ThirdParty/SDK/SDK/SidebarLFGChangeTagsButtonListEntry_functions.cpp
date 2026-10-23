#pragma once

#include "Basic.hpp"

#include "SidebarLFGChangeTagsButtonListEntry_classes.hpp"
#include "SidebarLFGChangeTagsButtonListEntry_parameters.hpp"

namespace SDK
{

void USidebarLFGChangeTagsButtonListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGChangeTagsButtonListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarLFGChangeTagsButtonListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLFGChangeTagsButtonListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGChangeTagsButtonListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLFGChangeTagsButtonListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGChangeTagsButtonListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLFGChangeTagsButtonListEntry_C::ExecuteUbergraph_SidebarLFGChangeTagsButtonListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGChangeTagsButtonListEntry_C", "ExecuteUbergraph_SidebarLFGChangeTagsButtonListEntry");

	Params::SidebarLFGChangeTagsButtonListEntry_C_ExecuteUbergraph_SidebarLFGChangeTagsButtonListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLFGChangeTagsButtonListEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGChangeTagsButtonListEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

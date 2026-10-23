#pragma once

#include "Basic.hpp"

#include "SidebarWhatAreTagsEditTagsTooltip_classes.hpp"
#include "SidebarWhatAreTagsEditTagsTooltip_parameters.hpp"

namespace SDK
{

void USidebarWhatAreTagsEditTagsTooltip_C::BndEvt__SidebarWhatAreTagsEditTagsTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarWhatAreTagsEditTagsTooltip_C", "BndEvt__SidebarWhatAreTagsEditTagsTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::SidebarWhatAreTagsEditTagsTooltip_C_BndEvt__SidebarWhatAreTagsEditTagsTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarWhatAreTagsEditTagsTooltip_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarWhatAreTagsEditTagsTooltip_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarWhatAreTagsEditTagsTooltip_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarWhatAreTagsEditTagsTooltip_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarWhatAreTagsEditTagsTooltip_C::ExecuteUbergraph_SidebarWhatAreTagsEditTagsTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarWhatAreTagsEditTagsTooltip_C", "ExecuteUbergraph_SidebarWhatAreTagsEditTagsTooltip");

	Params::SidebarWhatAreTagsEditTagsTooltip_C_ExecuteUbergraph_SidebarWhatAreTagsEditTagsTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarWhatAreTagsEditTagsTooltip_C::Finished_403D1C044D946ADE029116801BEB88EB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarWhatAreTagsEditTagsTooltip_C", "Finished_403D1C044D946ADE029116801BEB88EB");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarWhatAreTagsEditTagsTooltip_C::Finished_5D07487B49685BD47F6772925D8F43EB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarWhatAreTagsEditTagsTooltip_C", "Finished_5D07487B49685BD47F6772925D8F43EB");

	UObject::ProcessEvent(Func, nullptr);
}

}

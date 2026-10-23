#pragma once

#include "Basic.hpp"

#include "FortSidebarCheckbox_classes.hpp"
#include "FortSidebarCheckbox_parameters.hpp"

namespace SDK
{

void UFortSidebarCheckbox_C::ToggleCheckbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "ToggleCheckbox");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSidebarCheckbox_C::SetSelected(bool NewSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "SetSelected");

	Params::FortSidebarCheckbox_C_SetSelected Parms{};

	Parms.NewSelected = NewSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSidebarCheckbox_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSidebarCheckbox_C::ExecuteUbergraph_FortSidebarCheckbox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "ExecuteUbergraph_FortSidebarCheckbox");

	Params::FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSidebarCheckbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSidebarCheckbox_C::BP_ToggleCheckbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "BP_ToggleCheckbox");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSidebarCheckbox_C::BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarCheckbox_C", "BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

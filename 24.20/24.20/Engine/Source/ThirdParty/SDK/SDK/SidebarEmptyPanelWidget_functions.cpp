#pragma once

#include "Basic.hpp"

#include "SidebarEmptyPanelWidget_classes.hpp"
#include "SidebarEmptyPanelWidget_parameters.hpp"

namespace SDK
{

void USidebarEmptyPanelWidget_C::BndEvt__SidebarEmptyPanelWidget_ButtonWidget_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEmptyPanelWidget_C", "BndEvt__SidebarEmptyPanelWidget_ButtonWidget_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarEmptyPanelWidget_C_BndEvt__SidebarEmptyPanelWidget_ButtonWidget_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarEmptyPanelWidget_C::ExecuteUbergraph_SidebarEmptyPanelWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEmptyPanelWidget_C", "ExecuteUbergraph_SidebarEmptyPanelWidget");

	Params::SidebarEmptyPanelWidget_C_ExecuteUbergraph_SidebarEmptyPanelWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

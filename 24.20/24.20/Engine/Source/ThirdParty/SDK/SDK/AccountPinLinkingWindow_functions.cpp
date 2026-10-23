#pragma once

#include "Basic.hpp"

#include "AccountPinLinkingWindow_classes.hpp"
#include "AccountPinLinkingWindow_parameters.hpp"

namespace SDK
{

void UAccountPinLinkingWindow_C::BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AccountPinLinkingWindow_C", "BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	Params::AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UAccountPinLinkingWindow_C::ExecuteUbergraph_AccountPinLinkingWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AccountPinLinkingWindow_C", "ExecuteUbergraph_AccountPinLinkingWindow");

	Params::AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

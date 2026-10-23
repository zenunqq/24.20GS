#pragma once

#include "Basic.hpp"

#include "RestartClient_classes.hpp"
#include "RestartClient_parameters.hpp"

namespace SDK
{

void URestartClient_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RestartClient_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void URestartClient_C::ExecuteUbergraph_RestartClient(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RestartClient_C", "ExecuteUbergraph_RestartClient");

	Params::RestartClient_C_ExecuteUbergraph_RestartClient Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URestartClient_C::OnButtonSet(bool InbShouldExit, bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RestartClient_C", "OnButtonSet");

	Params::RestartClient_C_OnButtonSet Parms{};

	Parms.InbShouldExit = InbShouldExit;
	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

void URestartClient_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RestartClient_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

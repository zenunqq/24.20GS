#pragma once

#include "Basic.hpp"

#include "WebPurchase_classes.hpp"
#include "WebPurchase_parameters.hpp"

namespace SDK
{

void UWebPurchase_C::BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebPurchase_C", "BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UWebPurchase_C::ExecuteUbergraph_WebPurchase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebPurchase_C", "ExecuteUbergraph_WebPurchase");

	Params::WebPurchase_C_ExecuteUbergraph_WebPurchase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

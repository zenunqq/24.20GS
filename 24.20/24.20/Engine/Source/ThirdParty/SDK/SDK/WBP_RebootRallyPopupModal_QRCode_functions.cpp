#pragma once

#include "Basic.hpp"

#include "WBP_RebootRallyPopupModal_QRCode_classes.hpp"
#include "WBP_RebootRallyPopupModal_QRCode_parameters.hpp"

namespace SDK
{

void UWBP_RebootRallyPopupModal_QRCode_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallyPopupModal_QRCode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallyPopupModal_QRCode_C::ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode");

	Params::WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_QRCode_C::InputMethodChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "InputMethodChanged");

	Params::WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_QRCode_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallyPopupModal_QRCode_C::SetIsInvite(bool bIsInvite_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "SetIsInvite");

	Params::WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite Parms{};

	Parms.bIsInvite_0 = bIsInvite_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_QRCode_C::UpdateQRCode(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "UpdateQRCode");

	Params::WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_QRCode_C::UpdateText(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "UpdateText");

	Params::WBP_RebootRallyPopupModal_QRCode_C_UpdateText Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_QRCode_C::UpdateURL(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_QRCode_C", "UpdateURL");

	Params::WBP_RebootRallyPopupModal_QRCode_C_UpdateURL Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

#include "Basic.hpp"

#include "LockerArchivingTooltip_classes.hpp"
#include "LockerArchivingTooltip_parameters.hpp"

namespace SDK
{

void ULockerArchivingTooltip_C::BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::LockerArchivingTooltip_C_BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void ULockerArchivingTooltip_C::ExecuteUbergraph_LockerArchivingTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "ExecuteUbergraph_LockerArchivingTooltip");

	Params::LockerArchivingTooltip_C_ExecuteUbergraph_LockerArchivingTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULockerArchivingTooltip_C::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "HideTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void ULockerArchivingTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "PreConstruct");

	Params::LockerArchivingTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void ULockerArchivingTooltip_C::SetText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "SetText");

	Params::LockerArchivingTooltip_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);

	Text = std::move(Parms.Text);
}

void ULockerArchivingTooltip_C::SetTooltipEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "SetTooltipEnabled");

	Params::LockerArchivingTooltip_C_SetTooltipEnabled Parms{};

	Parms.bInEnabled = bInEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void ULockerArchivingTooltip_C::SetTooltipStatus(bool bShouldShowTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "SetTooltipStatus");

	Params::LockerArchivingTooltip_C_SetTooltipStatus Parms{};

	Parms.bShouldShowTooltip = bShouldShowTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

void ULockerArchivingTooltip_C::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerArchivingTooltip_C", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}

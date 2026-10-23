#pragma once

#include "Basic.hpp"

#include "WBP_PopupTooltip_classes.hpp"
#include "WBP_PopupTooltip_parameters.hpp"

namespace SDK
{

void UWBP_PopupTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_PopupTooltip_C::ExecuteUbergraph_WBP_PopupTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "ExecuteUbergraph_WBP_PopupTooltip");

	Params::WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PopupTooltip_C::HideNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "HideNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_PopupTooltip_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_PopupTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "PreConstruct");

	Params::WBP_PopupTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PopupTooltip_C::SetFirstLineText(const class FText& FirstLineText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "SetFirstLineText");

	Params::WBP_PopupTooltip_C_SetFirstLineText Parms{};

	Parms.FirstLineText_0 = std::move(FirstLineText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PopupTooltip_C::ShowNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PopupTooltip_C", "ShowNotification");

	UObject::ProcessEvent(Func, nullptr);
}

}

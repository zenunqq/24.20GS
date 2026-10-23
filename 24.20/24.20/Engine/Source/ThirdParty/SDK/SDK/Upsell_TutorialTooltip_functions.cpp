#pragma once

#include "Basic.hpp"

#include "Upsell_TutorialTooltip_classes.hpp"
#include "Upsell_TutorialTooltip_parameters.hpp"

namespace SDK
{

void UUpsell_TutorialTooltip_C::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Upsell_TutorialTooltip_C", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UUpsell_TutorialTooltip_C::SetTooltipEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Upsell_TutorialTooltip_C", "SetTooltipEnabled");

	Params::Upsell_TutorialTooltip_C_SetTooltipEnabled Parms{};

	Parms.bInEnabled = bInEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UUpsell_TutorialTooltip_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Upsell_TutorialTooltip_C", "SetText");

	Params::Upsell_TutorialTooltip_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UUpsell_TutorialTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Upsell_TutorialTooltip_C", "PreConstruct");

	Params::Upsell_TutorialTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UUpsell_TutorialTooltip_C::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Upsell_TutorialTooltip_C", "HideTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UUpsell_TutorialTooltip_C::ExecuteUbergraph_Upsell_TutorialTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Upsell_TutorialTooltip_C", "ExecuteUbergraph_Upsell_TutorialTooltip");

	Params::Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

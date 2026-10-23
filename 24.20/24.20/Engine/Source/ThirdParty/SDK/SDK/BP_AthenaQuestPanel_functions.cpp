#pragma once

#include "Basic.hpp"

#include "BP_AthenaQuestPanel_classes.hpp"
#include "BP_AthenaQuestPanel_parameters.hpp"

namespace SDK
{

void UBP_AthenaQuestPanel_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaQuestPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaQuestPanel_C::ExecuteUbergraph_BP_AthenaQuestPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "ExecuteUbergraph_BP_AthenaQuestPanel");

	Params::BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanel_C::OnUpdateScrollPosition(class UWidget* WidgetToScroll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "OnUpdateScrollPosition");

	Params::BP_AthenaQuestPanel_C_OnUpdateScrollPosition Parms{};

	Parms.WidgetToScroll = WidgetToScroll;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanel_C::SetMobileVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "SetMobileVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaQuestPanel_C::SetXPBarVisibility(bool ShouldHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "SetXPBarVisibility");

	Params::BP_AthenaQuestPanel_C_SetXPBarVisibility Parms{};

	Parms.ShouldHide = ShouldHide;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanel_C::UpdateXPBarCollapsedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanel_C", "UpdateXPBarCollapsedState");

	UObject::ProcessEvent(Func, nullptr);
}

}

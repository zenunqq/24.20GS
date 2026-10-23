#pragma once

#include "Basic.hpp"

#include "ShowdownRegionPopupMenu_classes.hpp"
#include "ShowdownRegionPopupMenu_parameters.hpp"

namespace SDK
{

void UShowdownRegionPopupMenu_C::BP_SetButtonText(class UCommonButtonLegacy* Button, const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionPopupMenu_C", "BP_SetButtonText");

	Params::ShowdownRegionPopupMenu_C_BP_SetButtonText Parms{};

	Parms.Button = Button;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownRegionPopupMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionPopupMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownRegionPopupMenu_C::ExecuteUbergraph_ShowdownRegionPopupMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionPopupMenu_C", "ExecuteUbergraph_ShowdownRegionPopupMenu");

	Params::ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

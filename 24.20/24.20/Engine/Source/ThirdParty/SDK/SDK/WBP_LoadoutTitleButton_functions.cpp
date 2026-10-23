#pragma once

#include "Basic.hpp"

#include "WBP_LoadoutTitleButton_classes.hpp"
#include "WBP_LoadoutTitleButton_parameters.hpp"

namespace SDK
{

void UWBP_LoadoutTitleButton_C::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "BP_OnFocusLost");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_LoadoutTitleButton_C::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "BP_OnFocusReceived");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_LoadoutTitleButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_LoadoutTitleButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_LoadoutTitleButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_LoadoutTitleButton_C::ExecuteUbergraph_WBP_LoadoutTitleButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "ExecuteUbergraph_WBP_LoadoutTitleButton");

	Params::WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_LoadoutTitleButton_C::Set_Text(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutTitleButton_C", "Set Text");

	Params::WBP_LoadoutTitleButton_C_Set_Text Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

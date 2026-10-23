#pragma once

#include "Basic.hpp"

#include "WBP_ExpressYourSupportFavoriteButton_classes.hpp"
#include "WBP_ExpressYourSupportFavoriteButton_parameters.hpp"

namespace SDK
{

void UWBP_ExpressYourSupportFavoriteButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportFavoriteButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportFavoriteButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportFavoriteButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportFavoriteButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportFavoriteButton_C::ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton");

	Params::WBP_ExpressYourSupportFavoriteButton_C_ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ExpressYourSupportFavoriteButton_C::SetButtonHeight(bool IsTouch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "SetButtonHeight");

	Params::WBP_ExpressYourSupportFavoriteButton_C_SetButtonHeight Parms{};

	Parms.IsTouch = IsTouch;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ExpressYourSupportFavoriteButton_C::StopHoveringAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "StopHoveringAnimations");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportFavoriteButton_C::StopTogglingAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportFavoriteButton_C", "StopTogglingAnimations");

	UObject::ProcessEvent(Func, nullptr);
}

}

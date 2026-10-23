#pragma once

#include "Basic.hpp"

#include "PiPBladeMenuButton_classes.hpp"
#include "PiPBladeMenuButton_parameters.hpp"

namespace SDK
{

void UPiPBladeMenuButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPBladeMenuButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPiPBladeMenuButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPBladeMenuButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPiPBladeMenuButton_C::ExecuteUbergraph_PiPBladeMenuButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPBladeMenuButton_C", "ExecuteUbergraph_PiPBladeMenuButton");

	Params::PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPiPBladeMenuButton_C::UpdatePiPStatusBP(const bool LoggedIn, const bool Enabled, const bool ParentalControlsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPBladeMenuButton_C", "UpdatePiPStatusBP");

	Params::PiPBladeMenuButton_C_UpdatePiPStatusBP Parms{};

	Parms.LoggedIn = LoggedIn;
	Parms.Enabled = Enabled;
	Parms.ParentalControlsEnabled = ParentalControlsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UPiPBladeMenuButton_C::UpdateStatus(bool IsEnabled, bool IsLoggedIn, bool IsParentalControlsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPBladeMenuButton_C", "UpdateStatus");

	Params::PiPBladeMenuButton_C_UpdateStatus Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.IsLoggedIn = IsLoggedIn;
	Parms.IsParentalControlsEnabled = IsParentalControlsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

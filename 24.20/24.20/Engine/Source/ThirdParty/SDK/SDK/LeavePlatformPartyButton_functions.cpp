#pragma once

#include "Basic.hpp"

#include "LeavePlatformPartyButton_classes.hpp"
#include "LeavePlatformPartyButton_parameters.hpp"

namespace SDK
{

void ULeavePlatformPartyButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULeavePlatformPartyButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULeavePlatformPartyButton_C::ExecuteUbergraph_LeavePlatformPartyButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "ExecuteUbergraph_LeavePlatformPartyButton");

	Params::LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULeavePlatformPartyButton_C::SetText(const class FText& New_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "SetText");

	Params::LeavePlatformPartyButton_C_SetText Parms{};

	Parms.New_Text = std::move(New_Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

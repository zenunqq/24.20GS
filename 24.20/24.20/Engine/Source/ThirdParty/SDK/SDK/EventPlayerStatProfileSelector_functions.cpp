#pragma once

#include "Basic.hpp"

#include "EventPlayerStatProfileSelector_classes.hpp"
#include "EventPlayerStatProfileSelector_parameters.hpp"

namespace SDK
{

void UEventPlayerStatProfileSelector_C::BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventPlayerStatProfileSelector_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventPlayerStatProfileSelector_C::ExecuteUbergraph_EventPlayerStatProfileSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "ExecuteUbergraph_EventPlayerStatProfileSelector");

	Params::EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventPlayerStatProfileSelector_C::Set_Up_Profile_Selector_Style(const struct FFortTournamentDisplayInfo& Tournament_Display_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "Set Up Profile Selector Style");

	Params::EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style Parms{};

	Parms.Tournament_Display_Info = std::move(Tournament_Display_Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

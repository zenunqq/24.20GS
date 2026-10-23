#pragma once

#include "Basic.hpp"

#include "ChatMessageEntry_classes.hpp"
#include "ChatMessageEntry_parameters.hpp"

namespace SDK
{

void UChatMessageEntry_C::OnFocusedChanged(bool bIsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageEntry_C", "OnFocusedChanged");

	Params::ChatMessageEntry_C_OnFocusedChanged Parms{};

	Parms.bIsFocused = bIsFocused;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatMessageEntry_C::OnEntryUpdated_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageEntry_C", "OnEntryUpdated_1");

	UObject::ProcessEvent(Func, nullptr);
}

void UChatMessageEntry_C::HandleSelectionStatusChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageEntry_C", "HandleSelectionStatusChanged");

	Params::ChatMessageEntry_C_HandleSelectionStatusChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatMessageEntry_C::ExecuteUbergraph_ChatMessageEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageEntry_C", "ExecuteUbergraph_ChatMessageEntry");

	Params::ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatMessageEntry_C::BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageEntry_C", "BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

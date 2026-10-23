#pragma once

#include "Basic.hpp"

#include "NameLoadoutPopup_classes.hpp"
#include "NameLoadoutPopup_parameters.hpp"

namespace SDK
{

void UNameLoadoutPopup_C::BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameLoadoutPopup_C", "BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UNameLoadoutPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameLoadoutPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UNameLoadoutPopup_C::ExecuteUbergraph_NameLoadoutPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameLoadoutPopup_C", "ExecuteUbergraph_NameLoadoutPopup");

	Params::NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

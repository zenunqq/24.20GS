#pragma once

#include "Basic.hpp"

#include "SquadSelection_classes.hpp"
#include "SquadSelection_parameters.hpp"

namespace SDK
{

void USquadSelection_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSelection_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadSelection_C::ExecuteUbergraph_SquadSelection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSelection_C", "ExecuteUbergraph_SquadSelection");

	Params::SquadSelection_C_ExecuteUbergraph_SquadSelection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadSelection_C::OnLocalPlayerParticipationChanged(bool bIsParticipating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSelection_C", "OnLocalPlayerParticipationChanged");

	Params::SquadSelection_C_OnLocalPlayerParticipationChanged Parms{};

	Parms.bIsParticipating = bIsParticipating;

	UObject::ProcessEvent(Func, &Parms);
}

}

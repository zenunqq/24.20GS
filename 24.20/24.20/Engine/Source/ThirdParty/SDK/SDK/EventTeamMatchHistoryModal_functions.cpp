#pragma once

#include "Basic.hpp"

#include "EventTeamMatchHistoryModal_classes.hpp"
#include "EventTeamMatchHistoryModal_parameters.hpp"

namespace SDK
{

void UEventTeamMatchHistoryModal_C::BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventTeamMatchHistoryModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventTeamMatchHistoryModal_C::ExecuteUbergraph_EventTeamMatchHistoryModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "ExecuteUbergraph_EventTeamMatchHistoryModal");

	Params::EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventTeamMatchHistoryModal_C::OnSetupMatchHistory(const class FString& TournamentId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "OnSetupMatchHistory");

	Params::EventTeamMatchHistoryModal_C_OnSetupMatchHistory Parms{};

	Parms.TournamentId = std::move(TournamentId);
	Parms.EventWindowId = std::move(EventWindowId);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventTeamMatchHistoryModal_C::Set_Up_Match_History_Style(const struct FFortTournamentDisplayInfo& Tournament_Display_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "Set Up Match History Style");

	Params::EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style Parms{};

	Parms.Tournament_Display_Info = std::move(Tournament_Display_Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

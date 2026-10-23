#pragma once

#include "Basic.hpp"

#include "EventLeaderboardSummary_classes.hpp"
#include "EventLeaderboardSummary_parameters.hpp"

namespace SDK
{

void UEventLeaderboardSummary_C::BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardSummary_C", "BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardSummary_C_BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardSummary_C::BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardSummary_C", "BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardSummary_C_BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardSummary_C::BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardSummary_C", "BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardSummary_C_BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardSummary_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardSummary_C", "EventColorize");

	Params::EventLeaderboardSummary_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo_0 = std::move(TournamentDisplayInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardSummary_C::ExecuteUbergraph_EventLeaderboardSummary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardSummary_C", "ExecuteUbergraph_EventLeaderboardSummary");

	Params::EventLeaderboardSummary_C_ExecuteUbergraph_EventLeaderboardSummary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardSummary_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardSummary_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

#include "Basic.hpp"

#include "EventLeaderboardEntryDetails_classes.hpp"
#include "EventLeaderboardEntryDetails_parameters.hpp"

namespace SDK
{

void UEventLeaderboardEntryDetails_C::BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardEntryDetails_C_BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardEntryDetails_C_BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardEntryDetails_C_BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardEntryDetails_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardEntryDetails_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardEntryDetails_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntryDetails_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventColorize");

	Params::EventLeaderboardEntryDetails_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntryDetails_C::ExecuteUbergraph_EventLeaderboardEntryDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ExecuteUbergraph_EventLeaderboardEntryDetails");

	Params::EventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::LeaderboardEntryDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "LeaderboardEntryDoubleClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntryDetails_C::Set_Leaderboard_Key(const class FString& LeaderboardInstanceId_0, const class FString& LeaderboardGroupingId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Set Leaderboard Key");

	Params::EventLeaderboardEntryDetails_C_Set_Leaderboard_Key Parms{};

	Parms.LeaderboardInstanceId_0 = std::move(LeaderboardInstanceId_0);
	Parms.LeaderboardGroupingId = std::move(LeaderboardGroupingId);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::Set_Points_Breakdown(ETournamentDisplayType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Set Points Breakdown");

	Params::EventLeaderboardEntryDetails_C_Set_Points_Breakdown Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::Set_Stats_Rows(ETournamentDisplayType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Set Stats Rows");

	Params::EventLeaderboardEntryDetails_C_Set_Stats_Rows Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::SetTournamentValues(const class FString& InTournamentId, const class FString& InEventWindowId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "SetTournamentValues");

	Params::EventLeaderboardEntryDetails_C_SetTournamentValues Parms{};

	Parms.InTournamentId = std::move(InTournamentId);
	Parms.InEventWindowId = std::move(InEventWindowId);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::Show_Details(class UFortEventLeaderboardEntryData* EntryData, ETournamentDisplayType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Show Details");

	Params::EventLeaderboardEntryDetails_C_Show_Details Parms{};

	Parms.EntryData = EntryData;
	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntryDetails_C::Update_Alt_Leaderboard_Tracked_Stat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Update Alt Leaderboard Tracked Stat");

	UObject::ProcessEvent(Func, nullptr);
}

}

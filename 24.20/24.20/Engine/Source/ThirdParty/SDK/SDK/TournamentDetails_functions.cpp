#pragma once

#include "Basic.hpp"

#include "TournamentDetails_classes.hpp"
#include "TournamentDetails_parameters.hpp"

namespace SDK
{

void UTournamentDetails_C::AnimTransition(bool In, class UWidgetAnimation* Animation, double PlaySpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "AnimTransition");

	Params::TournamentDetails_C_AnimTransition Parms{};

	Parms.In = In;
	Parms.Animation = Animation;
	Parms.PlaySpeed = PlaySpeed;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::CloseEventWindowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "CloseEventWindowDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::CloseTournamentDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "CloseTournamentDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::CreateScoringWidgets(const class FString& TournamentSeriesId, const class FString& TournamentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "CreateScoringWidgets");

	Params::TournamentDetails_C_CreateScoringWidgets Parms{};

	Parms.TournamentSeriesId = std::move(TournamentSeriesId);
	Parms.TournamentId = std::move(TournamentId);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::EventBackoutLiveGames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventBackoutLiveGames");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventCenterEventWindow(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventCenterEventWindow");

	Params::TournamentDetails_C_EventCenterEventWindow Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::EventCloseLeaderboard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventCloseLeaderboard");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventclosePayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventclosePayout");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventDeselectWindows(class UWidget* SelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventDeselectWindows");

	Params::TournamentDetails_C_EventDeselectWindows Parms{};

	Parms.SelectedWidget = SelectedWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::EventFullScreenAnimOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventFullScreenAnimOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventShowWindowDetails(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventShowWindowDetails");

	Params::TournamentDetails_C_EventShowWindowDetails Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::EventStartCentering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventStartCentering");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventStopCentering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventStopCentering");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventToggleFullScreenContent(bool In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventToggleFullScreenContent");

	Params::TournamentDetails_C_EventToggleFullScreenContent Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::EventViewFullLeaderboard(const class FString& TournamentId, const class FString& EventId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventViewFullLeaderboard");

	Params::TournamentDetails_C_EventViewFullLeaderboard Parms{};

	Parms.TournamentId = std::move(TournamentId);
	Parms.EventId = std::move(EventId);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::EventViewLiveGames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventViewLiveGames");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::EventViewPayout(const class FString& EventWindowId, const class FString& EventId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "EventViewPayout");

	Params::TournamentDetails_C_EventViewPayout Parms{};

	Parms.EventWindowId = std::move(EventWindowId);
	Parms.EventId = std::move(EventId);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::ExecuteUbergraph_TournamentDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "ExecuteUbergraph_TournamentDetails");

	Params::TournamentDetails_C_ExecuteUbergraph_TournamentDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::Handle_Back(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "Handle_Back");

	Params::TournamentDetails_C_Handle_Back Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

void UTournamentDetails_C::Is_Scoring_Rule_Valid(const struct FFortShowdownScoringRuleInfo& ScoringRuleInfo, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "Is Scoring Rule Valid");

	Params::TournamentDetails_C_Is_Scoring_Rule_Valid Parms{};

	Parms.ScoringRuleInfo = std::move(ScoringRuleInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}

void UTournamentDetails_C::No_payouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "No payouts");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::OnActivateScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "OnActivateScreen");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::OnHandleBack(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "OnHandleBack");

	Params::TournamentDetails_C_OnHandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

void UTournamentDetails_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RefreshDetailsPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RefreshDetailsPanel");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RefreshEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RefreshEvents");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RefreshOverviewPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RefreshOverviewPanel");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RefreshScoringRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RefreshScoringRules");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RefreshViolators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RefreshViolators");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentDetails_C::RemoveInvalidScoringRules(TArray<struct FFortShowdownScoringRuleInfo>& UnfilteredScoringRules, TArray<struct FFortShowdownScoringRuleInfo>* FilteredScoringRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "RemoveInvalidScoringRules");

	Params::TournamentDetails_C_RemoveInvalidScoringRules Parms{};

	Parms.UnfilteredScoringRules = std::move(UnfilteredScoringRules);

	UObject::ProcessEvent(Func, &Parms);

	UnfilteredScoringRules = std::move(Parms.UnfilteredScoringRules);

	if (FilteredScoringRules != nullptr)
		*FilteredScoringRules = std::move(Parms.FilteredScoringRules);
}

void UTournamentDetails_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "Tick");

	Params::TournamentDetails_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentDetails_C::UpdateDefaultTournamentEvent(TArray<class FString>& TournamentEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentDetails_C", "UpdateDefaultTournamentEvent");

	Params::TournamentDetails_C_UpdateDefaultTournamentEvent Parms{};

	Parms.TournamentEvents = std::move(TournamentEvents);

	UObject::ProcessEvent(Func, &Parms);

	TournamentEvents = std::move(Parms.TournamentEvents);
}

}

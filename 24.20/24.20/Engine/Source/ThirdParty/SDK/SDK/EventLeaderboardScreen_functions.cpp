#pragma once

#include "Basic.hpp"

#include "EventLeaderboardScreen_classes.hpp"
#include "EventLeaderboardScreen_parameters.hpp"

namespace SDK
{

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardScreen_C::Event_Leaderboard_Screen_On_Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "Event Leaderboard Screen On Activated");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardScreen_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "EventColorize");

	Params::EventLeaderboardScreen_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "EventIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "ExecuteUbergraph_EventLeaderboardScreen");

	Params::EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::Init(const class FString& EventWindowId, const class FString& TournamentSeriesId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "Init");

	Params::EventLeaderboardScreen_C_Init Parms{};

	Parms.EventWindowId = std::move(EventWindowId);
	Parms.TournamentSeriesId = std::move(TournamentSeriesId);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::InitializeTabButton(class UCommonButtonLegacy* TabButton, const class FText& TabText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "InitializeTabButton");

	Params::EventLeaderboardScreen_C_InitializeTabButton Parms{};

	Parms.TabButton = TabButton;
	Parms.TabText = std::move(TabText);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::Item_Double_Clicked(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "Item Double-Clicked");

	Params::EventLeaderboardScreen_C_Item_Double_Clicked Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::OnDetailsPanelUpdate(bool bShowDetailsPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "OnDetailsPanelUpdate");

	Params::EventLeaderboardScreen_C_OnDetailsPanelUpdate Parms{};

	Parms.bShowDetailsPanel = bShowDetailsPanel;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardDisplayTypeChanged");

	Params::EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged Parms{};

	Parms.NewDisplayType = NewDisplayType;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::OnLeaderboardEntrySelected(const class UFortEventLeaderboardEntryData* EntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardEntrySelected");

	Params::EventLeaderboardScreen_C_OnLeaderboardEntrySelected Parms{};

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::OnTabVisibilityChange(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "OnTabVisibilityChange");

	Params::EventLeaderboardScreen_C_OnTabVisibilityChange Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardScreen_C::ShowMyStats(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardScreen_C", "ShowMyStats");

	Params::EventLeaderboardScreen_C_ShowMyStats Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}

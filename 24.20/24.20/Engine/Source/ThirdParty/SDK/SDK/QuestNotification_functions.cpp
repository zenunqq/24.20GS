#pragma once

#include "Basic.hpp"

#include "QuestNotification_classes.hpp"
#include "QuestNotification_parameters.hpp"

namespace SDK
{

void UQuestNotification_C::BndEvt__QuestNotification_Button_MobileClickCatcher_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "BndEvt__QuestNotification_Button_MobileClickCatcher_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::BP_OnTimerSet(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "BP_OnTimerSet");

	Params::QuestNotification_C_BP_OnTimerSet Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::EventCompleteAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventCompleteAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::EventFillComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventFillComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::EventOnIntroStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventOnIntroStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::EventOnStartComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventOnStartComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::EventReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::ExecuteUbergraph_QuestNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "ExecuteUbergraph_QuestNotification");

	Params::QuestNotification_C_ExecuteUbergraph_QuestNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::HideBindWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "HideBindWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::OnEnableCompleteFlavorText(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "OnEnableCompleteFlavorText");

	Params::QuestNotification_C_OnEnableCompleteFlavorText Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::OnPlayRushedNotificationIntro(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "OnPlayRushedNotificationIntro");

	Params::QuestNotification_C_OnPlayRushedNotificationIntro Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::OnUpdateNotificationBackground(bool bUseRarityContainer, bool bIsDailyPunchcardQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "OnUpdateNotificationBackground");

	Params::QuestNotification_C_OnUpdateNotificationBackground Parms{};

	Parms.bUseRarityContainer = bUseRarityContainer;
	Parms.bIsDailyPunchcardQuest = bIsDailyPunchcardQuest;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "PreConstruct");

	Params::QuestNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::SetAssistData(bool bWasAssisted, const class FString& OtherPlayersName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "SetAssistData");

	Params::QuestNotification_C_SetAssistData Parms{};

	Parms.bWasAssisted = bWasAssisted;
	Parms.OtherPlayersName = std::move(OtherPlayersName);

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestNotification_C::ShowBindWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "ShowBindWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::StartNotificationIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "StartNotificationIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::StartNotificationOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "StartNotificationOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::TurnInNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "TurnInNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestNotification_C::UpdateProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "UpdateProgress");

	UObject::ProcessEvent(Func, nullptr);
}

}

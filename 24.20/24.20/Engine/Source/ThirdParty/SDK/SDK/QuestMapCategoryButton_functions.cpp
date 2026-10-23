#pragma once

#include "Basic.hpp"

#include "QuestMapCategoryButton_classes.hpp"
#include "QuestMapCategoryButton_parameters.hpp"

namespace SDK
{

void UQuestMapCategoryButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::BP_OnTimerSet(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnTimerSet");

	Params::QuestMapCategoryButton_C_BP_OnTimerSet Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::BP_Populate(const class FText& Title, const class FText& SubText, int32 CompletedQuests, int32 TotalQuest, const struct FQuestCategoryButtonOverrides& ButtonOverrides, bool bQuestListContentDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_Populate");

	Params::QuestMapCategoryButton_C_BP_Populate Parms{};

	Parms.Title = std::move(Title);
	Parms.SubText = std::move(SubText);
	Parms.CompletedQuests = CompletedQuests;
	Parms.TotalQuest = TotalQuest;
	Parms.ButtonOverrides = std::move(ButtonOverrides);
	Parms.bQuestListContentDisabled = bQuestListContentDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::ExecuteUbergraph_QuestMapCategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "ExecuteUbergraph_QuestMapCategoryButton");

	Params::QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::OnFocusReceivedFromQuests()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnFocusReceivedFromQuests");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::OnFocusSetToQuests()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnFocusSetToQuests");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestMapCategoryButton_C::OnMoreInTimerSet(const EAthenaChallengeTimerState TimerState, const struct FTimespan& TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnMoreInTimerSet");

	Params::QuestMapCategoryButton_C_OnMoreInTimerSet Parms{};

	Parms.TimerState = TimerState;
	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::OnTimeRemainingTimerSet(const EAthenaChallengeTimerState TimerState, const EQuestCategoryButtonTimerState TimerType, const class FText& TimerText, const struct FTimespan& TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnTimeRemainingTimerSet");

	Params::QuestMapCategoryButton_C_OnTimeRemainingTimerSet Parms{};

	Parms.TimerState = TimerState;
	Parms.TimerType = TimerType;
	Parms.TimerText = std::move(TimerText);
	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::Populate(const class FText& Title, const class FText& SubText, int32 CompletedQuests, int32 TotalQuests, struct FQuestCategoryButtonOverrides& Overrides)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "Populate");

	Params::QuestMapCategoryButton_C_Populate Parms{};

	Parms.Title = std::move(Title);
	Parms.SubText = std::move(SubText);
	Parms.CompletedQuests = CompletedQuests;
	Parms.TotalQuests = TotalQuests;
	Parms.Overrides = std::move(Overrides);

	UObject::ProcessEvent(Func, &Parms);

	Overrides = std::move(Parms.Overrides);
}

void UQuestMapCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "PreConstruct");

	Params::QuestMapCategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::SetCompletedState(bool AllCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetCompletedState");

	Params::QuestMapCategoryButton_C_SetCompletedState Parms{};

	Parms.AllCompleted = AllCompleted;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::SetNudgeAnimValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetNudgeAnimValue");

	Params::QuestMapCategoryButton_C_SetNudgeAnimValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::SetTimer(const EAthenaChallengeTimerState TimerState, const EQuestCategoryButtonTimerState TimerType, const class FText& TimerText, const struct FTimespan& Timespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetTimer");

	Params::QuestMapCategoryButton_C_SetTimer Parms{};

	Parms.TimerState = TimerState;
	Parms.TimerType = TimerType;
	Parms.TimerText = std::move(TimerText);
	Parms.Timespan = std::move(Timespan);

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::SetTimerStyling(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetTimerStyling");

	Params::QuestMapCategoryButton_C_SetTimerStyling Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::SetTitle(const class FText& Title, const class FText& SubText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetTitle");

	Params::QuestMapCategoryButton_C_SetTitle Parms{};

	Parms.Title = std::move(Title);
	Parms.SubText = std::move(SubText);

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestMapCategoryButton_C::SetVisuals(struct FQuestCategoryButtonOverrides& Overrides)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetVisuals");

	Params::QuestMapCategoryButton_C_SetVisuals Parms{};

	Parms.Overrides = std::move(Overrides);

	UObject::ProcessEvent(Func, &Parms);

	Overrides = std::move(Parms.Overrides);
}

void UQuestMapCategoryButton_C::ShowNewBang(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "ShowNewBang");

	Params::QuestMapCategoryButton_C_ShowNewBang Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

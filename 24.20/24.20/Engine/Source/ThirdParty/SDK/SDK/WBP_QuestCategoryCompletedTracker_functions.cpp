#pragma once

#include "Basic.hpp"

#include "WBP_QuestCategoryCompletedTracker_classes.hpp"
#include "WBP_QuestCategoryCompletedTracker_parameters.hpp"

namespace SDK
{

void UWBP_QuestCategoryCompletedTracker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_QuestCategoryCompletedTracker_C::ExecuteUbergraph_WBP_QuestCategoryCompletedTracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "ExecuteUbergraph_WBP_QuestCategoryCompletedTracker");

	Params::WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestCategoryCompletedTracker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "PreConstruct");

	Params::WBP_QuestCategoryCompletedTracker_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestCategoryCompletedTracker_C::SetIsSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "SetIsSelected");

	Params::WBP_QuestCategoryCompletedTracker_C_SetIsSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestCategoryCompletedTracker_C::SetMoreLaterTimer(EAthenaChallengeTimerState TimerState, const struct FTimespan& TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "SetMoreLaterTimer");

	Params::WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer Parms{};

	Parms.TimerState = TimerState;
	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestCategoryCompletedTracker_C::SetOutOfScreen(bool IsOutOfScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "SetOutOfScreen");

	Params::WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen Parms{};

	Parms.IsOutOfScreen = IsOutOfScreen;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestCategoryCompletedTracker_C::SetProgress(int32 CompletedQuests_0, int32 TotalQuests_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "SetProgress");

	Params::WBP_QuestCategoryCompletedTracker_C_SetProgress Parms{};

	Parms.CompletedQuests_0 = CompletedQuests_0;
	Parms.TotalQuests_0 = TotalQuests_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestCategoryCompletedTracker_C::SetTextColorAnimValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestCategoryCompletedTracker_C", "SetTextColorAnimValue");

	Params::WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

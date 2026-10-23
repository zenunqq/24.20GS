#pragma once

#include "Basic.hpp"

#include "ShowdownPin_classes.hpp"
#include "ShowdownPin_parameters.hpp"

namespace SDK
{

void UShowdownPin_C::ChooseScoreToDisplay(int32* ScoreToDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "ChooseScoreToDisplay");

	Params::ShowdownPin_C_ChooseScoreToDisplay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScoreToDisplay != nullptr)
		*ScoreToDisplay = Parms.ScoreToDisplay;
}

void UShowdownPin_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownPin_C::EventFixPts(int32 Points)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "EventFixPts");

	Params::ShowdownPin_C_EventFixPts Parms{};

	Parms.Points = Points;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownPin_C::EventRevealAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "EventRevealAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownPin_C::EventSetTier(int32 Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "EventSetTier");

	Params::ShowdownPin_C_EventSetTier Parms{};

	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownPin_C::ExecuteUbergraph_ShowdownPin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "ExecuteUbergraph_ShowdownPin");

	Params::ShowdownPin_C_ExecuteUbergraph_ShowdownPin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownPin_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "PreConstruct");

	Params::ShowdownPin_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownPin_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownPin_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPin_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}

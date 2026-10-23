#pragma once

#include "Basic.hpp"

#include "AthenaChallengeListEntry_GoalCard_classes.hpp"
#include "AthenaChallengeListEntry_GoalCard_parameters.hpp"

namespace SDK
{

void UAthenaChallengeListEntry_GoalCard_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "BP_OnItemSelectionChanged");

	Params::AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_GoalCard_C::ExecuteUbergraph_AthenaChallengeListEntry_GoalCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "ExecuteUbergraph_AthenaChallengeListEntry_GoalCard");

	Params::AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_GoalCard_C::IsUsingGamepad(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "IsUsingGamepad");

	Params::AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

void UAthenaChallengeListEntry_GoalCard_C::OnChallengeDataSet(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "OnChallengeDataSet");

	Params::AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet Parms{};

	Parms.bDisabled = bDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

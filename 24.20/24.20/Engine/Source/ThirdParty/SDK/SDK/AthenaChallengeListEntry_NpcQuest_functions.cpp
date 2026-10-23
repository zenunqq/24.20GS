#pragma once

#include "Basic.hpp"

#include "AthenaChallengeListEntry_NpcQuest_classes.hpp"
#include "AthenaChallengeListEntry_NpcQuest_parameters.hpp"

namespace SDK
{

void UAthenaChallengeListEntry_NpcQuest_C::BP_FormatForChallengeOwnerLeftGame(bool bHasOwnerLeftGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "BP_FormatForChallengeOwnerLeftGame");

	Params::AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame Parms{};

	Parms.bHasOwnerLeftGame = bHasOwnerLeftGame;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::BP_OnChallengeInfoSet(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "BP_OnChallengeInfoSet");

	Params::AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet Parms{};

	Parms.bDisabled = bDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::BP_OnChallengeSeenChanged(bool bChallengeSeen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "BP_OnChallengeSeenChanged");

	Params::AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged Parms{};

	Parms.bChallengeSeen = bChallengeSeen;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "BP_OnItemSelectionChanged");

	Params::AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::BP_OnRaritySet(EFortRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "BP_OnRaritySet");

	Params::AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::BP_OnTimerSet(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "BP_OnTimerSet");

	Params::AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_NpcQuest_C::ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest");

	Params::AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::IsUsingGamepad(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "IsUsingGamepad");

	Params::AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

void UAthenaChallengeListEntry_NpcQuest_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "OnFocusLost");

	Params::AthenaChallengeListEntry_NpcQuest_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "OnMouseEnter");

	Params::AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "OnMouseLeave");

	Params::AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::OnSetState(bool bIsCompleted, bool bIsLocked, bool bIsPartyAssisted, bool bIsGroupChallenge_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "OnSetState");

	Params::AthenaChallengeListEntry_NpcQuest_C_OnSetState Parms{};

	Parms.bIsCompleted = bIsCompleted;
	Parms.bIsLocked = bIsLocked;
	Parms.bIsPartyAssisted = bIsPartyAssisted;
	Parms.bIsGroupChallenge_0 = bIsGroupChallenge_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::Play_Select_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "Play Select Sound");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_NpcQuest_C::SequenceEvent__ENTRYPOINTAthenaChallengeListEntry_NpcQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "SequenceEvent__ENTRYPOINTAthenaChallengeListEntry_NpcQuest");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_NpcQuest_C::SetComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "SetComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_NpcQuest_C::SetDefault(bool PartyAssisted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "SetDefault");

	Params::AthenaChallengeListEntry_NpcQuest_C_SetDefault Parms{};

	Parms.PartyAssisted = PartyAssisted;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "SetLocked");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_NpcQuest_C::SetLockedWithTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "SetLockedWithTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_NpcQuest_C::SetTimerStyling(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "SetTimerStyling");

	Params::AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_NpcQuest_C::UpdateGroupChallenge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_NpcQuest_C", "UpdateGroupChallenge");

	UObject::ProcessEvent(Func, nullptr);
}

}

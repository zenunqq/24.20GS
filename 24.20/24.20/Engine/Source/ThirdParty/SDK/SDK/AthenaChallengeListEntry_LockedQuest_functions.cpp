#pragma once

#include "Basic.hpp"

#include "AthenaChallengeListEntry_LockedQuest_classes.hpp"
#include "AthenaChallengeListEntry_LockedQuest_parameters.hpp"

namespace SDK
{

void UAthenaChallengeListEntry_LockedQuest_C::BP_OnChallengeInfoSet(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "BP_OnChallengeInfoSet");

	Params::AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet Parms{};

	Parms.bDisabled = bDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_LockedQuest_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_LockedQuest_C::BP_OnItemSelectionChanged(bool bIsSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "BP_OnItemSelectionChanged");

	Params::AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected_0 = bIsSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_LockedQuest_C::EndHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "EndHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_LockedQuest_C::ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest");

	Params::AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_LockedQuest_C::GetFinalDisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "GetFinalDisplayName");

	Params::AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);
}

void UAthenaChallengeListEntry_LockedQuest_C::GetFormattedTime(struct FTimespan& TimeRemaining, class FText* OutputString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "GetFormattedTime");

	Params::AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime Parms{};

	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);

	TimeRemaining = std::move(Parms.TimeRemaining);

	if (OutputString != nullptr)
		*OutputString = std::move(Parms.OutputString);
}

void UAthenaChallengeListEntry_LockedQuest_C::OnInitDisplayText(const ELockedWidgetUnlockType& InUnlockType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "OnInitDisplayText");

	Params::AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText Parms{};

	Parms.InUnlockType = InUnlockType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_LockedQuest_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "OnMouseEnter");

	Params::AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_LockedQuest_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "OnMouseLeave");

	Params::AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_LockedQuest_C::StartHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_LockedQuest_C", "StartHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

}

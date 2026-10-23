#pragma once

#include "Basic.hpp"

#include "AthenaChallengeListEntry_PartyUp_classes.hpp"
#include "AthenaChallengeListEntry_PartyUp_parameters.hpp"

namespace SDK
{

void UAthenaChallengeListEntry_PartyUp_C::BP_OnChallengeInfoSet(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "BP_OnChallengeInfoSet");

	Params::AthenaChallengeListEntry_PartyUp_C_BP_OnChallengeInfoSet Parms{};

	Parms.bDisabled = bDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_PartyUp_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "BP_OnItemSelectionChanged");

	Params::AthenaChallengeListEntry_PartyUp_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_PartyUp_C::EndHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "EndHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_PartyUp_C::ExecuteUbergraph_AthenaChallengeListEntry_PartyUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "ExecuteUbergraph_AthenaChallengeListEntry_PartyUp");

	Params::AthenaChallengeListEntry_PartyUp_C_ExecuteUbergraph_AthenaChallengeListEntry_PartyUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_PartyUp_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "OnMouseEnter");

	Params::AthenaChallengeListEntry_PartyUp_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_PartyUp_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "OnMouseLeave");

	Params::AthenaChallengeListEntry_PartyUp_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_PartyUp_C::StartHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_PartyUp_C", "StartHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

}

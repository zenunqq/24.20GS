#pragma once

#include "Basic.hpp"

#include "AthenaChallengeListEntry_Custom_classes.hpp"
#include "AthenaChallengeListEntry_Custom_parameters.hpp"

namespace SDK
{

void UAthenaChallengeListEntry_Custom_C::BP_OnChallengeInfoSet(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "BP_OnChallengeInfoSet");

	Params::AthenaChallengeListEntry_Custom_C_BP_OnChallengeInfoSet Parms{};

	Parms.bDisabled = bDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_Custom_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "BP_OnItemSelectionChanged");

	Params::AthenaChallengeListEntry_Custom_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_Custom_C::EndHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "EndHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChallengeListEntry_Custom_C::ExecuteUbergraph_AthenaChallengeListEntry_Custom(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "ExecuteUbergraph_AthenaChallengeListEntry_Custom");

	Params::AthenaChallengeListEntry_Custom_C_ExecuteUbergraph_AthenaChallengeListEntry_Custom Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_Custom_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "OnMouseEnter");

	Params::AthenaChallengeListEntry_Custom_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_Custom_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "OnMouseLeave");

	Params::AthenaChallengeListEntry_Custom_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChallengeListEntry_Custom_C::StartHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_Custom_C", "StartHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

}

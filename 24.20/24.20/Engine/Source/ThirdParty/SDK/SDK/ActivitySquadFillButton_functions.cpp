#pragma once

#include "Basic.hpp"

#include "ActivitySquadFillButton_classes.hpp"
#include "ActivitySquadFillButton_parameters.hpp"

namespace SDK
{

void UActivitySquadFillButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::ExecuteUbergraph_ActivitySquadFillButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "ExecuteUbergraph_ActivitySquadFillButton");

	Params::ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivitySquadFillButton_C::Finished_147E379D49BEF6766075069D8A2DDE6F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "Finished_147E379D49BEF6766075069D8A2DDE6F");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivitySquadFillButton_C::OnDesiredSquadFillSelectionChanged(const bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "OnDesiredSquadFillSelectionChanged");

	Params::ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivitySquadFillButton_C::OnSquadFillAvailabilityChanged(const bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "OnSquadFillAvailabilityChanged");

	Params::ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivitySquadFillButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "PreConstruct");

	Params::ActivitySquadFillButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivitySquadFillButton_C::ToggleFillOnlyVisibility(const bool bIsFillOnlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivitySquadFillButton_C", "ToggleFillOnlyVisibility");

	Params::ActivitySquadFillButton_C_ToggleFillOnlyVisibility Parms{};

	Parms.bIsFillOnlyEnabled = bIsFillOnlyEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

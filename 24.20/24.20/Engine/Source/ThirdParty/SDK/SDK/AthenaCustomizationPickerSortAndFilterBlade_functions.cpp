#pragma once

#include "Basic.hpp"

#include "AthenaCustomizationPickerSortAndFilterBlade_classes.hpp"
#include "AthenaCustomizationPickerSortAndFilterBlade_parameters.hpp"

namespace SDK
{

void UAthenaCustomizationPickerSortAndFilterBlade_C::BP_HighlightSortOrFilterButton(class UCommonButtonBase* SortOrFilterButton, bool bHighlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "BP_HighlightSortOrFilterButton");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_BP_HighlightSortOrFilterButton Parms{};

	Parms.SortOrFilterButton = SortOrFilterButton;
	Parms.bHighlight = bHighlight;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::BP_OnArchiveFilteringSet(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "BP_OnArchiveFilteringSet");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_BP_OnArchiveFilteringSet Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::BP_OnBladeClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "BP_OnBladeClose");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::BP_OnBladeOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "BP_OnBladeOpen");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::BP_OnSortOrFilterButtonCreated(class UCommonButtonBase* NewButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "BP_OnSortOrFilterButtonCreated");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_BP_OnSortOrFilterButtonCreated Parms{};

	Parms.NewButton = NewButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::BP_SetSortOrFilterButtonDisplayName(class UCommonButtonBase* SortOrFilterButton, const class FText& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "BP_SetSortOrFilterButtonDisplayName");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_BP_SetSortOrFilterButtonDisplayName Parms{};

	Parms.SortOrFilterButton = SortOrFilterButton;
	Parms.DisplayName = std::move(DisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::Finished_B61EB04E44460529171509A5523A917A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "Finished_B61EB04E44460529171509A5523A917A");

	UObject::ProcessEvent(Func, nullptr);
}

class UWidget* UAthenaCustomizationPickerSortAndFilterBlade_C::NavigateDownFromSortButtons(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "NavigateDownFromSortButtons");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_NavigateDownFromSortButtons Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UWidget* UAthenaCustomizationPickerSortAndFilterBlade_C::NavigateUpFromFilterButtons(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "NavigateUpFromFilterButtons");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_NavigateUpFromFilterButtons Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaCustomizationPickerSortAndFilterBlade_C::UpdateSortAndFilterButtons(bool bBladeOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerSortAndFilterBlade_C", "UpdateSortAndFilterButtons");

	Params::AthenaCustomizationPickerSortAndFilterBlade_C_UpdateSortAndFilterButtons Parms{};

	Parms.bBladeOpen = bBladeOpen;

	UObject::ProcessEvent(Func, &Parms);
}

}

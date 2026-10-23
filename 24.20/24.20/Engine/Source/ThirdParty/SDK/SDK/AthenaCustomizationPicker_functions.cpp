#pragma once

#include "Basic.hpp"

#include "AthenaCustomizationPicker_classes.hpp"
#include "AthenaCustomizationPicker_parameters.hpp"

namespace SDK
{

void UAthenaCustomizationPicker_C::BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::AthenaCustomizationPicker_C_BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::AthenaCustomizationPicker_C_BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::AthenaCustomizationPicker_C_BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::AthenaCustomizationPicker_C_BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::BndEvt__AthenaCustomizationPicker_Tooltip_ArchiveFilter_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__AthenaCustomizationPicker_Tooltip_ArchiveFilter_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaCustomizationPicker_C_BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::AthenaCustomizationPicker_C_BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "ExecuteUbergraph_AthenaCustomizationPicker");

	Params::AthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::GetTextFilterSelectedState(bool* bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "GetTextFilterSelectedState");

	Params::AthenaCustomizationPicker_C_GetTextFilterSelectedState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSelected != nullptr)
		*bIsSelected = Parms.bIsSelected;
}

void UAthenaCustomizationPicker_C::HandleButtonTextSearchClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleButtonTextSearchClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::HandleSearchTextFilterChanged(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleSearchTextFilterChanged");

	Params::AthenaCustomizationPicker_C_HandleSearchTextFilterChanged Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::HandleTextChanged(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleTextChanged");

	Params::AthenaCustomizationPicker_C_HandleTextChanged Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::HandleTextEntryTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleTextEntryTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::NavigateDownFromSearch(EUINavigation Navigation_0, class UWidget** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "NavigateDownFromSearch");

	Params::AthenaCustomizationPicker_C_NavigateDownFromSearch Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

void UAthenaCustomizationPicker_C::NavigateDownFromSortAndFilter(EUINavigation Navigation_0, class UWidget** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "NavigateDownFromSortAndFilter");

	Params::AthenaCustomizationPicker_C_NavigateDownFromSortAndFilter Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

class UWidget* UAthenaCustomizationPicker_C::NavigateUpFromPicker(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "NavigateUpFromPicker");

	Params::AthenaCustomizationPicker_C_NavigateUpFromPicker Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaCustomizationPicker_C::On_Text_Committed(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "On Text Committed");

	Params::AthenaCustomizationPicker_C_On_Text_Committed Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::OnInputMethodChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnInputMethodChanged");

	Params::AthenaCustomizationPicker_C_OnInputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::OnItemsAvailableInFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnItemsAvailableInFilter");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::OnNoItemsAvailableInFilter(const class FText& EmptyDisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnNoItemsAvailableInFilter");

	Params::AthenaCustomizationPicker_C_OnNoItemsAvailableInFilter Parms{};

	Parms.EmptyDisplayText = std::move(EmptyDisplayText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnRemovedFromFocusPath");

	Params::AthenaCustomizationPicker_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::OnSearchEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnSearchEnabled");

	Params::AthenaCustomizationPicker_C_OnSearchEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::OnShowArchiveFilterTooltip(bool bShowTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnShowArchiveFilterTooltip");

	Params::AthenaCustomizationPicker_C_OnShowArchiveFilterTooltip Parms{};

	Parms.bShowTooltip = bShowTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::OnUpdateArchiveFilterTooltipText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnUpdateArchiveFilterTooltipText");

	Params::AthenaCustomizationPicker_C_OnUpdateArchiveFilterTooltipText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::ResetTextSearchFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "ResetTextSearchFilter");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPicker_C::SetTextFilter(const class FText& InText, bool Clear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "SetTextFilter");

	Params::AthenaCustomizationPicker_C_SetTextFilter Parms{};

	Parms.InText = std::move(InText);
	Parms.Clear = Clear;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPicker_C::SetTextFilterSelectedState(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "SetTextFilterSelectedState");

	Params::AthenaCustomizationPicker_C_SetTextFilterSelectedState Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

bool UAthenaCustomizationPicker_C::HasSelectableTile() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "HasSelectableTile");

	Params::AthenaCustomizationPicker_C_HasSelectableTile Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

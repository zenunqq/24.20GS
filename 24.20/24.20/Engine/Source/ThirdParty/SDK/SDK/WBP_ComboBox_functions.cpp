#pragma once

#include "Basic.hpp"

#include "WBP_ComboBox_classes.hpp"
#include "WBP_ComboBox_parameters.hpp"

namespace SDK
{

void UWBP_ComboBox_C::SetContentSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "SetContentSize");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ComboBox_C::SetContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "SetContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ComboBox_C::SetActionVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "SetActionVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ComboBox_C::Set_Focus_Visual(bool IsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "Set Focus Visual");

	Params::WBP_ComboBox_C_Set_Focus_Visual Parms{};

	Parms.IsFocused = IsFocused;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::SetText(const class FString& TextValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "SetText");

	Params::WBP_ComboBox_C_SetText Parms{};

	Parms.TextValue = std::move(TextValue);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "OnMouseLeave");

	Params::WBP_ComboBox_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::RefreshHoverAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "RefreshHoverAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ComboBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "OnMouseEnter");

	Params::WBP_ComboBox_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "PreConstruct");

	Params::WBP_ComboBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::OnInputDeviceChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "OnInputDeviceChanged");

	Params::WBP_ComboBox_C_OnInputDeviceChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "OnRemovedFromFocusPath");

	Params::WBP_ComboBox_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ComboBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "OnAddedToFocusPath");

	Params::WBP_ComboBox_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ComboBox_C::ExecuteUbergraph_WBP_ComboBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "ExecuteUbergraph_WBP_ComboBox");

	Params::WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ComboBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

}

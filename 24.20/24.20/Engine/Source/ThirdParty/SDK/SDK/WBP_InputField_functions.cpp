#pragma once

#include "Basic.hpp"

#include "WBP_InputField_classes.hpp"
#include "WBP_InputField_parameters.hpp"

namespace SDK
{

void UWBP_InputField_C::SetTextValue(const class FText& TextValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetTextValue");

	Params::WBP_InputField_C_SetTextValue Parms{};

	Parms.TextValue = std::move(TextValue);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::SetProcessingVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetProcessingVisibility");

	Params::WBP_InputField_C_SetProcessingVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::SetLabelValue(const class FText& LabelValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetLabelValue");

	Params::WBP_InputField_C_SetLabelValue Parms{};

	Parms.LabelValue = std::move(LabelValue);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::SetEditableText(const class FText& EditableText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetEditableText");

	Params::WBP_InputField_C_SetEditableText Parms{};

	Parms.EditableText = std::move(EditableText);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::SetLabelDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetLabelDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::SetContentSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetContentSize");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::SetInputFieldState(E_UI_InputField_State State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetInputFieldState");

	Params::WBP_InputField_C_SetInputFieldState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::SetContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::SetHintText(const class FText& HintText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetHintText");

	Params::WBP_InputField_C_SetHintText Parms{};

	Parms.HintText = std::move(HintText);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::SetActionVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetActionVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::SetErrorText(const class FText& ErrorText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "SetErrorText");

	Params::WBP_InputField_C_SetErrorText Parms{};

	Parms.ErrorText_0 = std::move(ErrorText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::Set_Focus_Visual(bool IsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "Set Focus Visual");

	Params::WBP_InputField_C_Set_Focus_Visual Parms{};

	Parms.IsFocused = IsFocused;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::RefreshHoverAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "RefreshHoverAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnRemovedFromFocusPath");

	Params::WBP_InputField_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "PreConstruct");

	Params::WBP_InputField_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnMouseLeave");

	Params::WBP_InputField_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UWBP_InputField_C::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnTouchStarted");

	Params::WBP_InputField_C_OnTouchStarted Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UWBP_InputField_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnMouseEnter");

	Params::WBP_InputField_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UWBP_InputField_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnFocusReceived");

	Params::WBP_InputField_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UWBP_InputField_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnMouseButtonUp");

	Params::WBP_InputField_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UWBP_InputField_C::OnError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnError");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::OnInputDeviceChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnInputDeviceChanged");

	Params::WBP_InputField_C_OnInputDeviceChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "OnAddedToFocusPath");

	Params::WBP_InputField_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::ExecuteUbergraph_WBP_InputField(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "ExecuteUbergraph_WBP_InputField");

	Params::WBP_InputField_C_ExecuteUbergraph_WBP_InputField Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_InputField_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_InputField_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputField_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

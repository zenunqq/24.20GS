#pragma once

#include "Basic.hpp"

#include "EventsSimpleButton_classes.hpp"
#include "EventsSimpleButton_parameters.hpp"

namespace SDK
{

void UEventsSimpleButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::EventsSimpleButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventsSimpleButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleButton_C::ExecuteUbergraph_EventsSimpleButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "ExecuteUbergraph_EventsSimpleButton");

	Params::EventsSimpleButton_C_ExecuteUbergraph_EventsSimpleButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventsSimpleButton_C::InputTypeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "InputTypeChanged");

	Params::EventsSimpleButton_C_InputTypeChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UEventsSimpleButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "OnMouseButtonDown");

	Params::EventsSimpleButton_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UEventsSimpleButton_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "OnMouseButtonUp");

	Params::EventsSimpleButton_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UEventsSimpleButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "PreConstruct");

	Params::EventsSimpleButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventsSimpleButton_C::UpdateColor(const class FString& ParameterName, const struct FLinearColor& New_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleButton_C", "UpdateColor");

	Params::EventsSimpleButton_C_UpdateColor Parms{};

	Parms.ParameterName = std::move(ParameterName);
	Parms.New_Color = std::move(New_Color);

	UObject::ProcessEvent(Func, &Parms);
}

}

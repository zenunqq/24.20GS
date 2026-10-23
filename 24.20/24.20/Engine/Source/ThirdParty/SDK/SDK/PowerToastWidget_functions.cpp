#pragma once

#include "Basic.hpp"

#include "PowerToastWidget_classes.hpp"
#include "PowerToastWidget_parameters.hpp"

namespace SDK
{

void UPowerToastWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "ExecuteUbergraph_PowerToastWidget");

	Params::PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "HandleAnimationDelay");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnMouseEnter");

	Params::PowerToastWidget_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerToastWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnMouseLeave");

	Params::PowerToastWidget_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerToastWidget_C::ShowToast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "ShowToast");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}

}

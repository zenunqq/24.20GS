#pragma once

#include "Basic.hpp"

#include "FancyToastWidget_classes.hpp"
#include "FancyToastWidget_parameters.hpp"

namespace SDK
{

void UFancyToastWidget_C::Clicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "Clicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::CompleteToast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "CompleteToast");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::ExecuteUbergraph_FancyToastWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "ExecuteUbergraph_FancyToastWidget");

	Params::FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFancyToastWidget_C::On_Idle_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "On Idle Finished");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8");

	Params::FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UFancyToastWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "OnMouseButtonDown");

	Params::FancyToastWidget_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UFancyToastWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "OnMouseButtonUp");

	Params::FancyToastWidget_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFancyToastWidget_C::OnShowToast(const struct FFortToastDisplayInfo& DispalyInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "OnShowToast");

	Params::FancyToastWidget_C_OnShowToast Parms{};

	Parms.DispalyInfo = std::move(DispalyInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFancyToastWidget_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "RemoveWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::SetAndShowText(const class FText& Text, class UCommonTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "SetAndShowText");

	Params::FancyToastWidget_C_SetAndShowText Parms{};

	Parms.Text = std::move(Text);
	Parms.TextBlock = TextBlock;

	UObject::ProcessEvent(Func, &Parms);
}

void UFancyToastWidget_C::ShowToast(const struct FFortToastDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "ShowToast");

	Params::FancyToastWidget_C_ShowToast Parms{};

	Parms.DisplayInfo = std::move(DisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFancyToastWidget_C::SimulateAthenaStoreToast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "SimulateAthenaStoreToast");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::Start_Toast_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "Start Toast Animation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}

void UFancyToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FancyToastWidget_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}

}

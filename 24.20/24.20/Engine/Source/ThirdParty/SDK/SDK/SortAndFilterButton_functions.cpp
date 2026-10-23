#pragma once

#include "Basic.hpp"

#include "SortAndFilterButton_classes.hpp"
#include "SortAndFilterButton_parameters.hpp"

namespace SDK
{

void USortAndFilterButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USortAndFilterButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USortAndFilterButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USortAndFilterButton_C::ExecuteUbergraph_SortAndFilterButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "ExecuteUbergraph_SortAndFilterButton");

	Params::SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::HandleBladeOpenChanged(bool bBladeOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "HandleBladeOpenChanged");

	Params::SortAndFilterButton_C_HandleBladeOpenChanged Parms{};

	Parms.bBladeOpen = bBladeOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "OnMouseEnter");

	Params::SortAndFilterButton_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "OnMouseLeave");

	Params::SortAndFilterButton_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "PreConstruct");

	Params::SortAndFilterButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::ResetAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "ResetAnimations");

	UObject::ProcessEvent(Func, nullptr);
}

void USortAndFilterButton_C::SetHighlightBorderVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "SetHighlightBorderVisibility");

	Params::SortAndFilterButton_C_SetHighlightBorderVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "SetText");

	Params::SortAndFilterButton_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void USortAndFilterButton_C::SnapToEndOfAnimation(class UWidgetAnimation* Animation, EUMGSequencePlayMode PlayMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortAndFilterButton_C", "SnapToEndOfAnimation");

	Params::SortAndFilterButton_C_SnapToEndOfAnimation Parms{};

	Parms.Animation = Animation;
	Parms.PlayMode = PlayMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

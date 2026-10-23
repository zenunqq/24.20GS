#pragma once

#include "Basic.hpp"

#include "AthenaMOTDTeaserWidget_classes.hpp"
#include "AthenaMOTDTeaserWidget_parameters.hpp"

namespace SDK
{

void UAthenaMOTDTeaserWidget_C::BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature");

	Params::AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTeaserWidget_C::ExecuteUbergraph_AthenaMOTDTeaserWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "ExecuteUbergraph_AthenaMOTDTeaserWidget");

	Params::AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::HandleEntryWidgetHoveredChanged(bool NewIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "HandleEntryWidgetHoveredChanged");

	Params::AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged Parms{};

	Parms.NewIsHovered = NewIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::OnClicked(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "OnClicked");

	Params::AthenaMOTDTeaserWidget_C_OnClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::OnNewsPopulated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "OnNewsPopulated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTeaserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "PreConstruct");

	Params::AthenaMOTDTeaserWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::ScrollNextItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "ScrollNextItem");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTeaserWidget_C::SetDynamicColors(const struct FLinearColor& DarkColor, const struct FLinearColor& LightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "SetDynamicColors");

	Params::AthenaMOTDTeaserWidget_C_SetDynamicColors Parms{};

	Parms.DarkColor = std::move(DarkColor);
	Parms.LightColor = std::move(LightColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTeaserWidget_C::UpdateCurDisplayedNewsVisual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "UpdateCurDisplayedNewsVisual");

	UObject::ProcessEvent(Func, nullptr);
}

}

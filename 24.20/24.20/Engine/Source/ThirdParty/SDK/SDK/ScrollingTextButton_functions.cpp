#pragma once

#include "Basic.hpp"

#include "ScrollingTextButton_classes.hpp"
#include "ScrollingTextButton_parameters.hpp"

namespace SDK
{

void UScrollingTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::ExecuteUbergraph_ScrollingTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "ExecuteUbergraph_ScrollingTextButton");

	Params::ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnActionProgress");

	Params::ScrollingTextButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnTriggeredInputActionChanged");

	Params::ScrollingTextButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "PreConstruct");

	Params::ScrollingTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "Set Icon");

	Params::ScrollingTextButton_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "Set Text");

	Params::ScrollingTextButton_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::SetContentAlignment(EHorizontalAlignment ContentAlignment_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetContentAlignment");

	Params::ScrollingTextButton_C_SetContentAlignment Parms{};

	Parms.ContentAlignment_0 = ContentAlignment_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetControllerStyle");

	Params::ScrollingTextButton_C_SetControllerStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetMouseKeyboardStyle");

	Params::ScrollingTextButton_C_SetMouseKeyboardStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetTabLabelInfo");

	Params::ScrollingTextButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateStyle");

	Params::ScrollingTextButton_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

void UScrollingTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateTextAndStyle");

	Params::ScrollingTextButton_C_UpdateTextAndStyle Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UScrollingTextButton_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}

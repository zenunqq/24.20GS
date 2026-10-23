#pragma once

#include "Basic.hpp"

#include "ToastSocialWidget_classes.hpp"
#include "ToastSocialWidget_parameters.hpp"

namespace SDK
{

void UToastSocialWidget_C::BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ToastSocialWidget_C_BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::ToastSocialWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::CleanupBeforeClosing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "CleanupBeforeClosing");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::ExecuteUbergraph_ToastSocialWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "ExecuteUbergraph_ToastSocialWidget");

	Params::ToastSocialWidget_C_ExecuteUbergraph_ToastSocialWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

int32 UToastSocialWidget_C::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "GetActiveWidgetIndex");

	Params::ToastSocialWidget_C_GetActiveWidgetIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UToastSocialWidget_C::GetButtonCursorText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "GetButtonCursorText");

	Params::ToastSocialWidget_C_GetButtonCursorText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

void UToastSocialWidget_C::GetButtonHoldText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "GetButtonHoldText");

	Params::ToastSocialWidget_C_GetButtonHoldText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

ESlateVisibility UToastSocialWidget_C::GetInputSwitcherVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "GetInputSwitcherVisibility");

	Params::ToastSocialWidget_C_GetInputSwitcherVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UToastSocialWidget_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::OnCancelNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnCancelNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::OnCursorModeChanged(bool bCursorModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnCursorModeChanged");

	Params::ToastSocialWidget_C_OnCursorModeChanged Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::OnInputModeChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnInputModeChanged");

	Params::ToastSocialWidget_C_OnInputModeChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnMouseEnter");

	Params::ToastSocialWidget_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnMouseLeave");

	Params::ToastSocialWidget_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnNotificationSet");

	Params::ToastSocialWidget_C_OnNotificationSet Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnNotificationUpdated");

	Params::ToastSocialWidget_C_OnNotificationUpdated Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::OnTakeActionNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnTakeActionNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::OnUserStartedHoldActionNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "OnUserStartedHoldActionNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "SetImage");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::SetupAnimBindings(bool Unbind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "SetupAnimBindings");

	Params::ToastSocialWidget_C_SetupAnimBindings Parms{};

	Parms.Unbind = Unbind;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastSocialWidget_C::SetVisibilityForOptionalElements()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "SetVisibilityForOptionalElements");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "StartIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::TakeAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "TakeAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastSocialWidget_C::UpdateToast(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "UpdateToast");

	Params::ToastSocialWidget_C_UpdateToast Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

float UToastSocialWidget_C::GetDisplayTime(bool* bOutDisplayTimeOverridden) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastSocialWidget_C", "GetDisplayTime");

	Params::ToastSocialWidget_C_GetDisplayTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutDisplayTimeOverridden != nullptr)
		*bOutDisplayTimeOverridden = Parms.bOutDisplayTimeOverridden;

	return Parms.ReturnValue;
}

}

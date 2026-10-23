#pragma once

#include "Basic.hpp"

#include "ToastWidget_New_classes.hpp"
#include "ToastWidget_New_parameters.hpp"

namespace SDK
{

void UToastWidget_New_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_New_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::ExecuteUbergraph_ToastWidget_New(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "ExecuteUbergraph_ToastWidget_New");

	Params::ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

ESlateVisibility UToastWidget_New_C::GetOpenButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "GetOpenButtonVisibility");

	Params::ToastWidget_New_C_GetOpenButtonVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UToastWidget_New_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnMouseEnter");

	Params::ToastWidget_New_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_New_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnMouseLeave");

	Params::ToastWidget_New_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_New_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnNotificationSet");

	Params::ToastWidget_New_C_OnNotificationSet Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_New_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnNotificationUpdated");

	Params::ToastWidget_New_C_OnNotificationUpdated Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_New_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "SetImage");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::SetupAnimBindings(bool Unbind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "SetupAnimBindings");

	Params::ToastWidget_New_C_SetupAnimBindings Parms{};

	Parms.Unbind = Unbind;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_New_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "StartIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_New_C::UpdateToast(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "UpdateToast");

	Params::ToastWidget_New_C_UpdateToast Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

float UToastWidget_New_C::GetDisplayTime(bool* bOutDisplayTimeOverridden) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "GetDisplayTime");

	Params::ToastWidget_New_C_GetDisplayTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutDisplayTimeOverridden != nullptr)
		*bOutDisplayTimeOverridden = Parms.bOutDisplayTimeOverridden;

	return Parms.ReturnValue;
}

}

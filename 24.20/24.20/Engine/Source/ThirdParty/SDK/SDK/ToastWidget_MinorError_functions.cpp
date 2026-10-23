#pragma once

#include "Basic.hpp"

#include "ToastWidget_MinorError_classes.hpp"
#include "ToastWidget_MinorError_parameters.hpp"

namespace SDK
{

void UToastWidget_MinorError_C::ApplyAdditionalStyling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "ApplyAdditionalStyling");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::ToastWidget_MinorError_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_MinorError_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::ExecuteUbergraph_ToastWidget_MinorError(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "ExecuteUbergraph_ToastWidget_MinorError");

	Params::ToastWidget_MinorError_C_ExecuteUbergraph_ToastWidget_MinorError Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

ESlateVisibility UToastWidget_MinorError_C::GetOpenButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "GetOpenButtonVisibility");

	Params::ToastWidget_MinorError_C_GetOpenButtonVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UToastWidget_MinorError_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "OnMouseEnter");

	Params::ToastWidget_MinorError_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_MinorError_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "OnMouseLeave");

	Params::ToastWidget_MinorError_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_MinorError_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "OnNotificationSet");

	Params::ToastWidget_MinorError_C_OnNotificationSet Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_MinorError_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "OnNotificationUpdated");

	Params::ToastWidget_MinorError_C_OnNotificationUpdated Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_MinorError_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::SetupAnimBindings(bool Unbind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "SetupAnimBindings");

	Params::ToastWidget_MinorError_C_SetupAnimBindings Parms{};

	Parms.Unbind = Unbind;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidget_MinorError_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "StartIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidget_MinorError_C::UpdateToast(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_MinorError_C", "UpdateToast");

	Params::ToastWidget_MinorError_C_UpdateToast Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

}

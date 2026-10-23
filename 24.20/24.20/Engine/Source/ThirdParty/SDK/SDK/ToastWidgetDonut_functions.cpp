#pragma once

#include "Basic.hpp"

#include "ToastWidgetDonut_classes.hpp"
#include "ToastWidgetDonut_parameters.hpp"

namespace SDK
{

void UToastWidgetDonut_C::ApplyAdditionalStyling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "ApplyAdditionalStyling");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::ExecuteUbergraph_ToastWidgetDonut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "ExecuteUbergraph_ToastWidgetDonut");

	Params::ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

ESlateVisibility UToastWidgetDonut_C::GetOpenButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "GetOpenButtonVisibility");

	Params::ToastWidgetDonut_C_GetOpenButtonVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UToastWidgetDonut_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "OnNotificationSet");

	Params::ToastWidgetDonut_C_OnNotificationSet Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidgetDonut_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "OnNotificationUpdated");

	Params::ToastWidgetDonut_C_OnNotificationUpdated Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidgetDonut_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "SetImage");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::SetupAnimBindings(bool Unbind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "SetupAnimBindings");

	Params::ToastWidgetDonut_C_SetupAnimBindings Parms{};

	Parms.Unbind = Unbind;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastWidgetDonut_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "StartIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UToastWidgetDonut_C::UpdateToast(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "UpdateToast");

	Params::ToastWidgetDonut_C_UpdateToast Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

}

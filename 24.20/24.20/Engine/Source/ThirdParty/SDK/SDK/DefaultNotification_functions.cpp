#pragma once

#include "Basic.hpp"

#include "DefaultNotification_classes.hpp"
#include "DefaultNotification_parameters.hpp"

namespace SDK
{

void UDefaultNotification_C::StartNotificationOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultNotification_C", "StartNotificationOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UDefaultNotification_C::StartNotificationIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultNotification_C", "StartNotificationIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UDefaultNotification_C::ExecuteUbergraph_DefaultNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultNotification_C", "ExecuteUbergraph_DefaultNotification");

	Params::DefaultNotification_C_ExecuteUbergraph_DefaultNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

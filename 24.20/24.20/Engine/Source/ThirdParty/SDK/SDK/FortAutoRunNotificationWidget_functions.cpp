#pragma once

#include "Basic.hpp"

#include "FortAutoRunNotificationWidget_classes.hpp"
#include "FortAutoRunNotificationWidget_parameters.hpp"

namespace SDK
{

void UFortAutoRunNotificationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAutoRunNotificationWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAutoRunNotificationWidget_C::ExecuteUbergraph_FortAutoRunNotificationWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAutoRunNotificationWidget_C", "ExecuteUbergraph_FortAutoRunNotificationWidget");

	Params::FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAutoRunNotificationWidget_C::OnAutoRunEnabled(bool bAutoRunEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAutoRunNotificationWidget_C", "OnAutoRunEnabled");

	Params::FortAutoRunNotificationWidget_C_OnAutoRunEnabled Parms{};

	Parms.bAutoRunEnabled = bAutoRunEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

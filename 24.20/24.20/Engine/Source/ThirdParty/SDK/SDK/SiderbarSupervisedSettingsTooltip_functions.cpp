#pragma once

#include "Basic.hpp"

#include "SiderbarSupervisedSettingsTooltip_classes.hpp"
#include "SiderbarSupervisedSettingsTooltip_parameters.hpp"

namespace SDK
{

void USiderbarSupervisedSettingsTooltip_C::ExecuteUbergraph_SiderbarSupervisedSettingsTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SiderbarSupervisedSettingsTooltip_C", "ExecuteUbergraph_SiderbarSupervisedSettingsTooltip");

	Params::SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USiderbarSupervisedSettingsTooltip_C::Finished_9A4EF2E647B5B62CF2E0AA8CDBD2E514()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SiderbarSupervisedSettingsTooltip_C", "Finished_9A4EF2E647B5B62CF2E0AA8CDBD2E514");

	UObject::ProcessEvent(Func, nullptr);
}

void USiderbarSupervisedSettingsTooltip_C::OnEndTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SiderbarSupervisedSettingsTooltip_C", "OnEndTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void USiderbarSupervisedSettingsTooltip_C::OnShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SiderbarSupervisedSettingsTooltip_C", "OnShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}

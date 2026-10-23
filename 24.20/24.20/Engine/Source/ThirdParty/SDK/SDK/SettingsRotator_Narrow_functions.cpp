#pragma once

#include "Basic.hpp"

#include "SettingsRotator_Narrow_classes.hpp"
#include "SettingsRotator_Narrow_parameters.hpp"

namespace SDK
{

void USettingsRotator_Narrow_C::BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsRotator_Narrow_C", "BP_OnDefaultOptionSpecified");

	Params::SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified Parms{};

	Parms.DefaultOptionIndex = DefaultOptionIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsRotator_Narrow_C::BP_OnOptionSelected(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsRotator_Narrow_C", "BP_OnOptionSelected");

	Params::SettingsRotator_Narrow_C_BP_OnOptionSelected Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsRotator_Narrow_C::BP_OnOptionsPopulated(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsRotator_Narrow_C", "BP_OnOptionsPopulated");

	Params::SettingsRotator_Narrow_C_BP_OnOptionsPopulated Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsRotator_Narrow_C::ExecuteUbergraph_SettingsRotator_Narrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsRotator_Narrow_C", "ExecuteUbergraph_SettingsRotator_Narrow");

	Params::SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsRotator_Narrow_C::OnHover_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsRotator_Narrow_C", "OnHover Animation");

	UObject::ProcessEvent(Func, nullptr);
}

void USettingsRotator_Narrow_C::OnUnHover_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsRotator_Narrow_C", "OnUnHover Animation");

	UObject::ProcessEvent(Func, nullptr);
}

}

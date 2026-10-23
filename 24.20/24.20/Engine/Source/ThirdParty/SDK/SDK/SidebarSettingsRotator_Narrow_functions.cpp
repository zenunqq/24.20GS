#pragma once

#include "Basic.hpp"

#include "SidebarSettingsRotator_Narrow_classes.hpp"
#include "SidebarSettingsRotator_Narrow_parameters.hpp"

namespace SDK
{

void USidebarSettingsRotator_Narrow_C::BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsRotator_Narrow_C", "BP_OnDefaultOptionSpecified");

	Params::SidebarSettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified Parms{};

	Parms.DefaultOptionIndex = DefaultOptionIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsRotator_Narrow_C::BP_OnOptionSelected(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsRotator_Narrow_C", "BP_OnOptionSelected");

	Params::SidebarSettingsRotator_Narrow_C_BP_OnOptionSelected Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsRotator_Narrow_C::BP_OnOptionsPopulated(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsRotator_Narrow_C", "BP_OnOptionsPopulated");

	Params::SidebarSettingsRotator_Narrow_C_BP_OnOptionsPopulated Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsRotator_Narrow_C::ExecuteUbergraph_SidebarSettingsRotator_Narrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsRotator_Narrow_C", "ExecuteUbergraph_SidebarSettingsRotator_Narrow");

	Params::SidebarSettingsRotator_Narrow_C_ExecuteUbergraph_SidebarSettingsRotator_Narrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsRotator_Narrow_C::OnHover_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsRotator_Narrow_C", "OnHover Animation");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSettingsRotator_Narrow_C::OnUnHover_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsRotator_Narrow_C", "OnUnHover Animation");

	UObject::ProcessEvent(Func, nullptr);
}

}

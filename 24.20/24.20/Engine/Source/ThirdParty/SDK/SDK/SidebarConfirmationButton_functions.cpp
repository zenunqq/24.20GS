#pragma once

#include "Basic.hpp"

#include "SidebarConfirmationButton_classes.hpp"
#include "SidebarConfirmationButton_parameters.hpp"

namespace SDK
{

void USidebarConfirmationButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarConfirmationButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarConfirmationButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarConfirmationButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarConfirmationButton_C::ExecuteUbergraph_SidebarConfirmationButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarConfirmationButton_C", "ExecuteUbergraph_SidebarConfirmationButton");

	Params::SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarConfirmationButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarConfirmationButton_C", "PreConstruct");

	Params::SidebarConfirmationButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

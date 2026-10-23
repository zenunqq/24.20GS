#pragma once

#include "Basic.hpp"

#include "SidebarLfgEmptyButton_classes.hpp"
#include "SidebarLfgEmptyButton_parameters.hpp"

namespace SDK
{

void USidebarLfgEmptyButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgEmptyButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgEmptyButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgEmptyButton_C::ExecuteUbergraph_SidebarLfgEmptyButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "ExecuteUbergraph_SidebarLfgEmptyButton");

	Params::SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgEmptyButton_C::OnHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "OnHover");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgEmptyButton_C::OnUnhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "OnUnhover");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgEmptyButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgEmptyButton_C", "PreConstruct");

	Params::SidebarLfgEmptyButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

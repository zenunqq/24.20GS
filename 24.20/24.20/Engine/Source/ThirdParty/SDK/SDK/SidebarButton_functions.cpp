#pragma once

#include "Basic.hpp"

#include "SidebarButton_classes.hpp"
#include "SidebarButton_parameters.hpp"

namespace SDK
{

void USidebarButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarButton_C::ExecuteUbergraph_SidebarButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "ExecuteUbergraph_SidebarButton");

	Params::SidebarButton_C_ExecuteUbergraph_SidebarButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "PreConstruct");

	Params::SidebarButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarButton_C::SetSkewBoxColor(const struct FLinearColor& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarButton_C", "SetSkewBoxColor");

	Params::SidebarButton_C_SetSkewBoxColor Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}

}

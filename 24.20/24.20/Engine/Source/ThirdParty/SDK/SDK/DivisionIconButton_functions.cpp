#pragma once

#include "Basic.hpp"

#include "DivisionIconButton_classes.hpp"
#include "DivisionIconButton_parameters.hpp"

namespace SDK
{

void UDivisionIconButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UDivisionIconButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UDivisionIconButton_C::ExecuteUbergraph_DivisionIconButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "ExecuteUbergraph_DivisionIconButton");

	Params::DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UDivisionIconButton_C::OnRankButtonSelected(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "OnRankButtonSelected");

	Params::DivisionIconButton_C_OnRankButtonSelected Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

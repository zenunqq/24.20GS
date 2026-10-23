#pragma once

#include "Basic.hpp"

#include "WBP_RebootRallySelectionHeader_classes.hpp"
#include "WBP_RebootRallySelectionHeader_parameters.hpp"

namespace SDK
{

void UWBP_RebootRallySelectionHeader_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallySelectionHeader_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallySelectionHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallySelectionHeader_C::ExecuteUbergraph_WBP_RebootRallySelectionHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "ExecuteUbergraph_WBP_RebootRallySelectionHeader");

	Params::WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallySelectionHeader_C::Finished_83AA4B0145343A56061784AA887827D3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "Finished_83AA4B0145343A56061784AA887827D3");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallySelectionHeader_C::InputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "InputMethodChanged");

	Params::WBP_RebootRallySelectionHeader_C_InputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallySelectionHeader_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallySelectionHeader_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

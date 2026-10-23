#pragma once

#include "Basic.hpp"

#include "StoreSelectionPopup_classes.hpp"
#include "StoreSelectionPopup_parameters.hpp"

namespace SDK
{

void UStoreSelectionPopup_C::ExecuteUbergraph_StoreSelectionPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreSelectionPopup_C", "ExecuteUbergraph_StoreSelectionPopup");

	Params::StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreSelectionPopup_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreSelectionPopup_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

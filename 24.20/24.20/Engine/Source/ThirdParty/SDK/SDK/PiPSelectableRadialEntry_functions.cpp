#pragma once

#include "Basic.hpp"

#include "PiPSelectableRadialEntry_classes.hpp"
#include "PiPSelectableRadialEntry_parameters.hpp"

namespace SDK
{

void UPiPSelectableRadialEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPSelectableRadialEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPiPSelectableRadialEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPSelectableRadialEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPiPSelectableRadialEntry_C::BP_UpdateSelectionColor(bool Selected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPSelectableRadialEntry_C", "BP_UpdateSelectionColor");

	Params::PiPSelectableRadialEntry_C_BP_UpdateSelectionColor Parms{};

	Parms.Selected_0 = Selected_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UPiPSelectableRadialEntry_C::ExecuteUbergraph_PiPSelectableRadialEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPSelectableRadialEntry_C", "ExecuteUbergraph_PiPSelectableRadialEntry");

	Params::PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPiPSelectableRadialEntry_C::OnAvailabilityChanged(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPSelectableRadialEntry_C", "OnAvailabilityChanged");

	Params::PiPSelectableRadialEntry_C_OnAvailabilityChanged Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

}

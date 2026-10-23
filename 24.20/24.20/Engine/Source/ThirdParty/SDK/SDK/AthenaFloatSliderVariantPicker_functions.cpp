#pragma once

#include "Basic.hpp"

#include "AthenaFloatSliderVariantPicker_classes.hpp"
#include "AthenaFloatSliderVariantPicker_parameters.hpp"

namespace SDK
{

void UAthenaFloatSliderVariantPicker_C::OnUpdateValue(float NormalizedValue, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFloatSliderVariantPicker_C", "OnUpdateValue");

	Params::AthenaFloatSliderVariantPicker_C_OnUpdateValue Parms{};

	Parms.NormalizedValue = NormalizedValue;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFloatSliderVariantPicker_C::ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFloatSliderVariantPicker_C", "ExecuteUbergraph_AthenaFloatSliderVariantPicker");

	Params::AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

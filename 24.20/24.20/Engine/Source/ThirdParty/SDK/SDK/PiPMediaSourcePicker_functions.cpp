#pragma once

#include "Basic.hpp"

#include "PiPMediaSourcePicker_classes.hpp"
#include "PiPMediaSourcePicker_parameters.hpp"

namespace SDK
{

void UPiPMediaSourcePicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPMediaSourcePicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPiPMediaSourcePicker_C::ExecuteUbergraph_PiPMediaSourcePicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiPMediaSourcePicker_C", "ExecuteUbergraph_PiPMediaSourcePicker");

	Params::PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

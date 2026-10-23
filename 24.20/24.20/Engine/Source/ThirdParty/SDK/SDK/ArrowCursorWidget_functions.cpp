#pragma once

#include "Basic.hpp"

#include "ArrowCursorWidget_classes.hpp"
#include "ArrowCursorWidget_parameters.hpp"

namespace SDK
{

struct FSlateBrush UArrowCursorWidget_C::GetBackground_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowCursorWidget_C", "GetBackground_0");

	Params::ArrowCursorWidget_C_GetBackground_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma once

#include "Basic.hpp"

#include "TracerGeneric_classes.hpp"
#include "TracerGeneric_parameters.hpp"

namespace SDK
{

void ATracerGeneric_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

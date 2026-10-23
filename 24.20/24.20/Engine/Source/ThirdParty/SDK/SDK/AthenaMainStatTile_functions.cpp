#pragma once

#include "Basic.hpp"

#include "AthenaMainStatTile_classes.hpp"
#include "AthenaMainStatTile_parameters.hpp"

namespace SDK
{

void UAthenaMainStatTile_C::SetStatValue(const class FText& StatValueAsText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainStatTile_C", "SetStatValue");

	Params::AthenaMainStatTile_C_SetStatValue Parms{};

	Parms.StatValueAsText = std::move(StatValueAsText);

	UObject::ProcessEvent(Func, &Parms);
}

}

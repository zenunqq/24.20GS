#pragma once

#include "Basic.hpp"

#include "WolfCodeRuntime_classes.hpp"
#include "WolfCodeRuntime_parameters.hpp"

namespace SDK
{

void UFortCheatManager_Wolf::WolfEnable(const bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_Wolf", "WolfEnable");

	Params::FortCheatManager_Wolf_WolfEnable Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

#pragma once

#include "Basic.hpp"

#include "VictoryCrownComponent_classes.hpp"
#include "VictoryCrownComponent_parameters.hpp"

namespace SDK
{

void UVictoryCrownComponent_C::ExecuteUbergraph_VictoryCrownComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownComponent_C", "ExecuteUbergraph_VictoryCrownComponent");

	Params::VictoryCrownComponent_C_ExecuteUbergraph_VictoryCrownComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

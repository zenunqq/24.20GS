#pragma once

#include "Basic.hpp"

#include "GC_Teleport_Out_classes.hpp"
#include "GC_Teleport_Out_parameters.hpp"

namespace SDK
{

bool UGC_Teleport_Out_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Teleport_Out_C", "OnExecute");

	Params::GC_Teleport_Out_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma once

#include "Basic.hpp"

#include "BP_KoalaUIDirector_classes.hpp"
#include "BP_KoalaUIDirector_parameters.hpp"

namespace SDK
{

void ABP_KoalaUIDirector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KoalaUIDirector_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_KoalaUIDirector_C::ExecuteUbergraph_BP_KoalaUIDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KoalaUIDirector_C", "ExecuteUbergraph_BP_KoalaUIDirector");

	Params::BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

#include "Basic.hpp"

#include "PBWA_S1_Solid_classes.hpp"
#include "PBWA_S1_Solid_parameters.hpp"

namespace SDK
{

void APBWA_S1_Solid_C::ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBWA_S1_Solid_C", "ExecuteUbergraph_PBWA_S1_Solid");

	Params::PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APBWA_S1_Solid_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBWA_S1_Solid_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APBWA_S1_Solid_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBWA_S1_Solid_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

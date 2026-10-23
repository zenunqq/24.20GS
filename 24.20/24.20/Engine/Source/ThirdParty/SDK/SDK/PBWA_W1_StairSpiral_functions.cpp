#pragma once

#include "Basic.hpp"

#include "PBWA_W1_StairSpiral_classes.hpp"

namespace SDK
{

void APBWA_W1_StairSpiral_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBWA_W1_StairSpiral_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

#include "Basic.hpp"

#include "BP_DetailLevelMesh_classes.hpp"
#include "BP_DetailLevelMesh_parameters.hpp"

namespace SDK
{

void ABP_DetailLevelMesh_C::ExecuteUbergraph_BP_DetailLevelMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DetailLevelMesh_C", "ExecuteUbergraph_BP_DetailLevelMesh");

	Params::BP_DetailLevelMesh_C_ExecuteUbergraph_BP_DetailLevelMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

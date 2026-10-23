#pragma once

#include "Basic.hpp"

#include "GCL_Cornfield_Movement_classes.hpp"
#include "GCL_Cornfield_Movement_parameters.hpp"

namespace SDK
{

bool AGCL_Cornfield_Movement_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_Cornfield_Movement_C", "OnActive");

	Params::GCL_Cornfield_Movement_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCL_Cornfield_Movement_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_Cornfield_Movement_C", "OnRemove");

	Params::GCL_Cornfield_Movement_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

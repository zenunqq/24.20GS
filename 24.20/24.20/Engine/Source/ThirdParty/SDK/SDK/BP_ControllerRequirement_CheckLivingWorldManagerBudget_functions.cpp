#pragma once

#include "Basic.hpp"

#include "BP_ControllerRequirement_CheckLivingWorldManagerBudget_classes.hpp"
#include "BP_ControllerRequirement_CheckLivingWorldManagerBudget_parameters.hpp"

namespace SDK
{

bool UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C::IsRequirementMetInternal(const struct FControllerRequirementTestContext& RequestContext) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ControllerRequirement_CheckLivingWorldManagerBudget_C", "IsRequirementMetInternal");

	Params::BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal Parms{};

	Parms.RequestContext = std::move(RequestContext);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

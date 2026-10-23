#pragma once

#include "Basic.hpp"

#include "CrewBenefitsAnim_classes.hpp"
#include "CrewBenefitsAnim_parameters.hpp"

namespace SDK
{

void UCrewBenefitsAnim_C::EventPlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewBenefitsAnim_C", "EventPlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewBenefitsAnim_C::ExecuteUbergraph_CrewBenefitsAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewBenefitsAnim_C", "ExecuteUbergraph_CrewBenefitsAnim");

	Params::CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

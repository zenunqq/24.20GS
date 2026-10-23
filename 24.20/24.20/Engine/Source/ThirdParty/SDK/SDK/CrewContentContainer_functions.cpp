#pragma once

#include "Basic.hpp"

#include "CrewContentContainer_classes.hpp"
#include "CrewContentContainer_parameters.hpp"

namespace SDK
{

void UCrewContentContainer_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewContentContainer_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewContentContainer_C::ExecuteUbergraph_CrewContentContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewContentContainer_C", "ExecuteUbergraph_CrewContentContainer");

	Params::CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewContentContainer_C::OnTabSelected(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewContentContainer_C", "OnTabSelected");

	Params::CrewContentContainer_C_OnTabSelected Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

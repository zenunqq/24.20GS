#pragma once

#include "Basic.hpp"

#include "MidMatchAssignedGameplayRuntime_classes.hpp"
#include "MidMatchAssignedGameplayRuntime_parameters.hpp"

namespace SDK
{

struct FVector UFortGameStateComponent_AssignedObjective::CalculateSquadAvgLocation(const uint8 SquadId, const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortGameStateComponent_AssignedObjective", "CalculateSquadAvgLocation");

	Params::FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation Parms{};

	Parms.SquadId = SquadId;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortGameStateComponent_AssignedObjective::OnAssignedObjectiveReady(struct FFortAssignedObjectiveData& ObjectiveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "OnAssignedObjectiveReady");

	Params::FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady Parms{};

	Parms.ObjectiveData = std::move(ObjectiveData);

	UObject::ProcessEvent(Func, &Parms);

	ObjectiveData = std::move(Parms.ObjectiveData);
}

void UFortGameStateComponent_AssignedObjective::StartAssignedObjectives()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "StartAssignedObjectives");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

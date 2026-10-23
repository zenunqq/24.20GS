#pragma once

#include "Basic.hpp"

#include "GameFeatureStatus_classes.hpp"
#include "GameFeatureStatus_parameters.hpp"

namespace SDK
{

void UGameFeatureStatus_C::ExecuteUbergraph_GameFeatureStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameFeatureStatus_C", "ExecuteUbergraph_GameFeatureStatus");

	Params::GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameFeatureStatus_C::HandleStatusChanged(EAthenaGameFeatureStatus CurrentStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameFeatureStatus_C", "HandleStatusChanged");

	Params::GameFeatureStatus_C_HandleStatusChanged Parms{};

	Parms.CurrentStatus = CurrentStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameFeatureStatus_C::OnStatusChanged(EAthenaGameFeatureStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameFeatureStatus_C", "OnStatusChanged");

	Params::GameFeatureStatus_C_OnStatusChanged Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}

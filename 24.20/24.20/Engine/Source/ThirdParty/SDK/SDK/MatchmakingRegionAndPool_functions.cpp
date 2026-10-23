#pragma once

#include "Basic.hpp"

#include "MatchmakingRegionAndPool_classes.hpp"
#include "MatchmakingRegionAndPool_parameters.hpp"

namespace SDK
{

void UMatchmakingRegionAndPool_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingRegionAndPool_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UMatchmakingRegionAndPool_C::ExecuteUbergraph_MatchmakingRegionAndPool(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingRegionAndPool_C", "ExecuteUbergraph_MatchmakingRegionAndPool");

	Params::MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMatchmakingRegionAndPool_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingRegionAndPool_C", "Tick");

	Params::MatchmakingRegionAndPool_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

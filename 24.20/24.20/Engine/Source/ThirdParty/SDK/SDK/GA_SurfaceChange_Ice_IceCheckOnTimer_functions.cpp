#pragma once

#include "Basic.hpp"

#include "GA_SurfaceChange_Ice_IceCheckOnTimer_classes.hpp"
#include "GA_SurfaceChange_Ice_IceCheckOnTimer_parameters.hpp"

namespace SDK
{

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_IceCheckOnTimer_C", "ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer");

	Params::GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_IceCheckOnTimer_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_IceCheckOnTimer_C", "K2_OnEndAbility");

	Params::GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::RemoveIceGE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_IceCheckOnTimer_C", "RemoveIceGE");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::TraceForTerrain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_IceCheckOnTimer_C", "TraceForTerrain");

	UObject::ProcessEvent(Func, nullptr);
}

}

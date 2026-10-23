#pragma once

#include "Basic.hpp"

#include "StormShieldModifierRuntime_classes.hpp"
#include "StormShieldModifierRuntime_parameters.hpp"

namespace SDK
{

void AFortAthenaMutator_SplitStorm::OnRep_CurrentProxyCircle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnRep_CurrentProxyCircle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::OnSafeZoneIndicatorSpawned(class AFortSafeZoneIndicator* SafeZoneIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnSafeZoneIndicatorSpawned");

	Params::FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned Parms{};

	Parms.SafeZoneIndicator = SafeZoneIndicator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::OnSafeZonePhaseChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnSafeZonePhaseChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::SetProxyCenter(const struct FVector& NewCenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetProxyCenter");

	Params::FortAthenaMutator_SplitStorm_SetProxyCenter Parms{};

	Parms.NewCenter = std::move(NewCenter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::SetProxyRadius(const float NewRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetProxyRadius");

	Params::FortAthenaMutator_SplitStorm_SetProxyRadius Parms{};

	Parms.NewRadius = NewRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::SetSafeZoneProxyPhase(ESplitStormProxyPhase NewPhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetSafeZoneProxyPhase");

	Params::FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase Parms{};

	Parms.NewPhase = NewPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::StartProxyUpdateTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "StartProxyUpdateTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_SplitStorm::UpdateProxyCenterAndRadius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "UpdateProxyCenterAndRadius");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

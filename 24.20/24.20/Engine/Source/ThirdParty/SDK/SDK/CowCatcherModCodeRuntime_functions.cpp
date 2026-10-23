#pragma once

#include "Basic.hpp"

#include "CowCatcherModCodeRuntime_classes.hpp"
#include "CowCatcherModCodeRuntime_parameters.hpp"

namespace SDK
{

void ACowCatcherBarricadeBase::BeginCheckingForTouchingPawns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CowCatcherBarricadeBase", "BeginCheckingForTouchingPawns");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACowCatcherBarricadeBase::OnPlacementBlockedByPawnChanged(const bool bBlockedByPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CowCatcherBarricadeBase", "OnPlacementBlockedByPawnChanged");

	Params::CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged Parms{};

	Parms.bBlockedByPawn = bBlockedByPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

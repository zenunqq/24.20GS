#pragma once

#include "Basic.hpp"

#include "CRDPlayerTracker_classes.hpp"
#include "CRDPlayerTracker_parameters.hpp"

namespace SDK
{

class UUserWidget* ACRDPlayerTrackerMarker::CreatePlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, class AFortPlayerStateAthena* AssociatedPSA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CRDPlayerTrackerMarker", "CreatePlayerTrackerWidget");

	Params::CRDPlayerTrackerMarker_CreatePlayerTrackerWidget Parms{};

	Parms.InFortPlayerControllerGameplay = InFortPlayerControllerGameplay;
	Parms.AssociatedPSA = AssociatedPSA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ACRDPlayerTrackerMarker::DestroyPlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CRDPlayerTrackerMarker", "DestroyPlayerTrackerWidget");

	Params::CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget Parms{};

	Parms.InFortPlayerControllerGameplay = InFortPlayerControllerGameplay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

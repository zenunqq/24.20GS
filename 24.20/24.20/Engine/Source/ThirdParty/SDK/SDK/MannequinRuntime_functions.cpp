#pragma once

#include "Basic.hpp"

#include "MannequinRuntime_classes.hpp"
#include "MannequinRuntime_parameters.hpp"

namespace SDK
{

void UMannequinAnalyticsComponent::FireMannequinAnalytics_Interact(class AFortPlayerController* Controller, const ECreativeMannequinAnalyticsInteractType InteractType, const class UFortItemDefinition* Character, const class UFortItemDefinition* BackBling) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MannequinAnalyticsComponent", "FireMannequinAnalytics_Interact");

	Params::MannequinAnalyticsComponent_FireMannequinAnalytics_Interact Parms{};

	Parms.Controller = Controller;
	Parms.InteractType = InteractType;
	Parms.Character = Character;
	Parms.BackBling = BackBling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

#pragma once

#include "Basic.hpp"

#include "DoorSoundIndicatorComponent_classes.hpp"
#include "DoorSoundIndicatorComponent_parameters.hpp"

namespace SDK
{

TArray<EFortTeamAffiliation> UDoorSoundIndicatorComponent_C::GetAffiliationsToShowFor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "GetAffiliationsToShowFor");

	Params::DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UDoorSoundIndicatorComponent_C::ShouldShowSoundIndicator(class AFortPlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "ShouldShowSoundIndicator");

	Params::DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

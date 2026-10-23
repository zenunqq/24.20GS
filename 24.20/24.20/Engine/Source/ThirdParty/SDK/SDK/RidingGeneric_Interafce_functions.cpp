#pragma once

#include "Basic.hpp"

#include "RidingGeneric_Interafce_classes.hpp"
#include "RidingGeneric_Interafce_parameters.hpp"

namespace SDK
{

void IRidingGeneric_Interafce_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidingGeneric_Interafce_C", "GetRidingInfoFromTarget");

	Params::RidingGeneric_Interafce_C_GetRidingInfoFromTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;
}

void IRidingGeneric_Interafce_C::ToggleRidingAlternative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidingGeneric_Interafce_C", "ToggleRidingAlternative");

	UObject::ProcessEvent(Func, nullptr);
}

}

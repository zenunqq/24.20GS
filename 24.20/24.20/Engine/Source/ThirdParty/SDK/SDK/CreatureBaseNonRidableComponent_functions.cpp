#pragma once

#include "Basic.hpp"

#include "CreatureBaseNonRidableComponent_classes.hpp"
#include "CreatureBaseNonRidableComponent_parameters.hpp"

namespace SDK
{

void UCreatureBaseNonRidableComponent_C::AlternateRidingEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "AlternateRidingEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseNonRidableComponent_C::ExecuteUbergraph_CreatureBaseNonRidableComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "ExecuteUbergraph_CreatureBaseNonRidableComponent");

	Params::CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseNonRidableComponent_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "GetRidingInfoFromTarget");

	Params::CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;
}

void UCreatureBaseNonRidableComponent_C::ToggleRidingAlternative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "ToggleRidingAlternative");

	UObject::ProcessEvent(Func, nullptr);
}

}

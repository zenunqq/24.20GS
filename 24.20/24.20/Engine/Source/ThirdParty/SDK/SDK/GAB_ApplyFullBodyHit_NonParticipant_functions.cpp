#pragma once

#include "Basic.hpp"

#include "GAB_ApplyFullBodyHit_NonParticipant_classes.hpp"
#include "GAB_ApplyFullBodyHit_NonParticipant_parameters.hpp"

namespace SDK
{

void UGAB_ApplyFullBodyHit_NonParticipant_C::PickFullBodyHitMontageSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_ApplyFullBodyHit_NonParticipant_C", "PickFullBodyHitMontageSection");

	UObject::ProcessEvent(Func, nullptr);
}

}

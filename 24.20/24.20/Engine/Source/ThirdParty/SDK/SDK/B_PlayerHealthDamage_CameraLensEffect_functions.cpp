#pragma once

#include "Basic.hpp"

#include "B_PlayerHealthDamage_CameraLensEffect_classes.hpp"
#include "B_PlayerHealthDamage_CameraLensEffect_parameters.hpp"

namespace SDK
{

void AB_PlayerHealthDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PlayerHealthDamage_CameraLensEffect_C", "ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");

	Params::B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_PlayerHealthDamage_CameraLensEffect_C::PassParticle_Parameter(double NewParam, bool First_Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PlayerHealthDamage_CameraLensEffect_C", "PassParticle_Parameter");

	Params::B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter Parms{};

	Parms.NewParam = NewParam;
	Parms.First_Hit = First_Hit;

	UObject::ProcessEvent(Func, &Parms);
}

}

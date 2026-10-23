#pragma once

#include "Basic.hpp"

#include "Fauna_Idle_AnimInterface_classes.hpp"
#include "Fauna_Idle_AnimInterface_parameters.hpp"

namespace SDK
{

void IFauna_Idle_AnimInterface_C::Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fauna_Idle_AnimInterface_C", "Fauna Idle");

	Params::Fauna_Idle_AnimInterface_C_Fauna_Idle Parms{};

	Parms.InPose_Idle = std::move(InPose_Idle);

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Idle_0 != nullptr)
		*Fauna_Idle_0 = std::move(Parms.Fauna_Idle_0);
}

void IFauna_Idle_AnimInterface_C::Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fauna_Idle_AnimInterface_C", "Fauna IdleTurn");

	Params::Fauna_Idle_AnimInterface_C_Fauna_IdleTurn Parms{};

	Parms.InPose_IdleTurn = std::move(InPose_IdleTurn);

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_IdleTurn_0 != nullptr)
		*Fauna_IdleTurn_0 = std::move(Parms.Fauna_IdleTurn_0);
}

}

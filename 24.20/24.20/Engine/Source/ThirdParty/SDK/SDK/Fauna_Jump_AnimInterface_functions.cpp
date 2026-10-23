#pragma once

#include "Basic.hpp"

#include "Fauna_Jump_AnimInterface_classes.hpp"
#include "Fauna_Jump_AnimInterface_parameters.hpp"

namespace SDK
{

void IFauna_Jump_AnimInterface_C::Fauna_Jump(struct FPoseLink* Fauna_Jump_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fauna_Jump_AnimInterface_C", "Fauna Jump");

	Params::Fauna_Jump_AnimInterface_C_Fauna_Jump Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Jump_0 != nullptr)
		*Fauna_Jump_0 = std::move(Parms.Fauna_Jump_0);
}

}

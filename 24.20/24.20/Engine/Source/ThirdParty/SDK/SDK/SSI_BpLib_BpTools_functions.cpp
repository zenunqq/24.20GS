#pragma once

#include "Basic.hpp"

#include "SSI_BpLib_BpTools_classes.hpp"
#include "SSI_BpLib_BpTools_parameters.hpp"

namespace SDK
{

void USSI_BpLib_BpTools_C::OnLocalPlayersTeam(class AActor* TargetActor, class UObject* __WorldContext, bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SSI_BpLib_BpTools_C", "OnLocalPlayersTeam");

	Params::SSI_BpLib_BpTools_C_OnLocalPlayersTeam Parms{};

	Parms.TargetActor = TargetActor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}

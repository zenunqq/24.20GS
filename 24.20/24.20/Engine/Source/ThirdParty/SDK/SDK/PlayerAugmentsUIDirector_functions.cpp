#pragma once

#include "Basic.hpp"

#include "PlayerAugmentsUIDirector_classes.hpp"
#include "PlayerAugmentsUIDirector_parameters.hpp"

namespace SDK
{

void APlayerAugmentsUIDirector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAugmentsUIDirector_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerAugmentsUIDirector_C::ExecuteUbergraph_PlayerAugmentsUIDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAugmentsUIDirector_C", "ExecuteUbergraph_PlayerAugmentsUIDirector");

	Params::PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

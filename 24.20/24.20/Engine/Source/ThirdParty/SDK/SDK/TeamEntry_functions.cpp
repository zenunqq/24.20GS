#pragma once

#include "Basic.hpp"

#include "TeamEntry_classes.hpp"
#include "TeamEntry_parameters.hpp"

namespace SDK
{

void UTeamEntry_C::SetText(const class FText& Usernames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamEntry_C", "SetText");

	Params::TeamEntry_C_SetText Parms{};

	Parms.Usernames = std::move(Usernames);

	UObject::ProcessEvent(Func, &Parms);
}

}

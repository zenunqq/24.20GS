#pragma once

#include "Basic.hpp"

#include "TournamentModal_classes.hpp"
#include "TournamentModal_parameters.hpp"

namespace SDK
{

void UTournamentModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentModal_C::ExecuteUbergraph_TournamentModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentModal_C", "ExecuteUbergraph_TournamentModal");

	Params::TournamentModal_C_ExecuteUbergraph_TournamentModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentModal_C::OnTournamentSet(const struct FLinearColor& LeftColor, const struct FLinearColor& RightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentModal_C", "OnTournamentSet");

	Params::TournamentModal_C_OnTournamentSet Parms{};

	Parms.LeftColor = std::move(LeftColor);
	Parms.RightColor = std::move(RightColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

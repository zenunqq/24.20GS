#pragma once

#include "Basic.hpp"

#include "ShowdownTournamentPosterBack_classes.hpp"
#include "ShowdownTournamentPosterBack_parameters.hpp"

namespace SDK
{

void UShowdownTournamentPosterBack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownTournamentPosterBack_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownTournamentPosterBack_C::EventPopulateEventWindowData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "EventPopulateEventWindowData");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownTournamentPosterBack_C::ExecuteUbergraph_ShowdownTournamentPosterBack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "ExecuteUbergraph_ShowdownTournamentPosterBack");

	Params::ShowdownTournamentPosterBack_C_ExecuteUbergraph_ShowdownTournamentPosterBack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownTournamentPosterBack_C::GetTournamentDateText(class FText* TournamentDate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "GetTournamentDateText");

	Params::ShowdownTournamentPosterBack_C_GetTournamentDateText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TournamentDate != nullptr)
		*TournamentDate = std::move(Parms.TournamentDate);
}

void UShowdownTournamentPosterBack_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterBack_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}

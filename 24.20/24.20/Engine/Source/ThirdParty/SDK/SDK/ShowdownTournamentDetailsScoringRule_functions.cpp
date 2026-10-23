#pragma once

#include "Basic.hpp"

#include "ShowdownTournamentDetailsScoringRule_classes.hpp"
#include "ShowdownTournamentDetailsScoringRule_parameters.hpp"

namespace SDK
{

void UShowdownTournamentDetailsScoringRule_C::SetData(const struct FFortShowdownScoringRuleInfo& ScoreRule, const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentDetailsScoringRule_C", "SetData");

	Params::ShowdownTournamentDetailsScoringRule_C_SetData Parms{};

	Parms.ScoreRule = std::move(ScoreRule);
	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

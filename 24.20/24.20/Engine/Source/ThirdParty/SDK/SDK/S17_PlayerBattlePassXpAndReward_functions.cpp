#pragma once

#include "Basic.hpp"

#include "S17_PlayerBattlePassXpAndReward_classes.hpp"
#include "S17_PlayerBattlePassXpAndReward_parameters.hpp"

namespace SDK
{

void US17_PlayerBattlePassXpAndReward_C::ExecuteUbergraph_S17_PlayerBattlePassXpAndReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S17_PlayerBattlePassXpAndReward_C", "ExecuteUbergraph_S17_PlayerBattlePassXpAndReward");

	Params::S17_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S17_PlayerBattlePassXpAndReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void US17_PlayerBattlePassXpAndReward_C::OnLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S17_PlayerBattlePassXpAndReward_C", "OnLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void US17_PlayerBattlePassXpAndReward_C::OnProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S17_PlayerBattlePassXpAndReward_C", "OnProgressUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void US17_PlayerBattlePassXpAndReward_C::OnSuperCharged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S17_PlayerBattlePassXpAndReward_C", "OnSuperCharged");

	UObject::ProcessEvent(Func, nullptr);
}

void US17_PlayerBattlePassXpAndReward_C::Update_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S17_PlayerBattlePassXpAndReward_C", "Update Text");

	UObject::ProcessEvent(Func, nullptr);
}

}
